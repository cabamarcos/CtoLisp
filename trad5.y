/*Grupo 32 Adrián Espinar Fernández Marcos Caballero Cortés
100451018@alumnos.uc3m.es 100451047@alumnos.uc3m.es*/

%{                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para code
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;

// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
} t_attr ;

#define YYSTYPE t_attr

char memoria [64] ;       // memoria para las id de las funciones
int variables[100];         // arreglo para almacenar los valores de las variables
int num_variables = 0;      // número de variables

%}


// Definitions for explicit attributes

%token NUMBER        
%token IDENTIF       // Identificador=variable
%token INTEGER       // identifica el tipo entero
%token STRING
%token MAIN          // identifica el comienzo del proc. main
%token WHILE         // identifica el bucle main
%token PUTS
%token PRINTF
%token IF
%token ELSE
%token FOR
%token RETURN
%token SWAP


// Definitions for implicit attributes.
// USE THESE ONLY AT YOUR OWN RISK
/*

%union {                      // El tipo de la pila tiene caracter dual
    int value ;             // - valor numerico de un NUMERO
    char *code ;          // - para pasar los nombres de IDENTIFES
}

%token <value> NUMBER       // Todos los token tienen un tipo para la pila
%token <code> IDENTIF       // Identificador=variable
%token <code> INTEGER       // identifica la definicion de un entero
%token <code> STRING
%token <code> MAIN          // identifica el comienzo del proc. main
%token <code> WHILE         // identifica el bucle main
%token <code> PUTS
%token <code> PRINTF
%token <code> IF
%token <code> ELSE
%token <code> FOR
%token <code> RETURN
%token <code> SWAP


%type <...> Axiom ...

*/

%right '='                    // es la ultima operacion que se debe realizar
%left OR
%left AND
%left EQUAL NOT_EQUAL
%left '<' '>' LESS_EQUAL GREATER_EQUAL
%left '+' '-'                 // menor orden de precedencia
%left '*' '/' '%'                // orden de precedencia intermedio
%left UNARY_SIGN              // mayor orden de precedencia

%%                            // Seccion 3 Gramatica - Semantico



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Axioma  -> Donde se podrán declarar variables globales o declarar funciones todas las veces que se quiera antes de entrar al main                       **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************


axioma:       sentencia_var_globales ';'              { printf ("%s\n", $1.code) ; }
              r_expr                   { ; }

            |  sentencia_dec_funciones             { printf ("%s\n", $1.code) ; }
              r_expr                   { ; }
             
            |   sentencia_main     { printf ("%s\n", $1.code) ; }

            ;

r_expr:                                  { ; }
            |   axioma                   { ; }
            ;        



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_var_gloales -> Donde se declaran las variables globales                                                                                       **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************




sentencia_var_globales:  INTEGER IDENTIF '=' expresion ',' sentencia_asignacion_sucesion { sprintf (temp, "(setq %s %s) %s", $2.code, $4.code, $6.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF '=' expresion { sprintf (temp, "(setq %s %s)", $2.code, $4.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF ',' sentencia_asignacion_sucesion { sprintf (temp, "(setq %s 0) %s", $2.code, $4.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF { sprintf (temp, "(setq %s 0)", $2.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF '[' expresion ']' ',' sentencia_asignacion_sucesion { sprintf (temp, "(setq %s (make-array %s)) %s", $2.code, $4.code, $6.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF '[' expresion ']' { sprintf (temp, "(setq %s (make-array %s))", $2.code, $4.code) ;
                                                $$.code = gen_code (temp) ; }

            ;      


//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  sentencia_dec_funciones -> Donde se declaran las funciones                                                                                              **                                               
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_dec_funciones: IDENTIF { sprintf (memoria, "%s", $1.code) ; } '(' sentencia_arg ')' '{' sentencia_var_locales sentencia_r '}' { sprintf (temp, "(defun %s (%s)\n\t(let (%s) %s)\n)", $1.code, $4.code, $7.code, $8.code) ;  
                                           $$.code = gen_code (temp) ; }
                                           
            | INTEGER SWAP '(' sentencia_arg ')' '{' RETURN asignacion_sucesion ';' '}'  { sprintf (temp, "(defun swap (%s)\n\t(return-from swap (values %s)\n))", $4.code, $8.code) ;  
                                           $$.code = gen_code (temp) ; }

            ;




//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  sentencia_arg -> Donde se declaran los argumentos de las funciones                                                                                      **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************




sentencia_arg: /*lambda*/              {$$.code = gen_code ("") ; }

            |INTEGER IDENTIF ',' sentencia_arg { sprintf (temp, "%s %s", $2.code, $4.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF { sprintf (temp, "%s", $2.code) ; 
                                           $$.code = gen_code (temp) ; }

            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_main -> Donde se declara el main                                                                                                              **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_main:  MAIN {sprintf (memoria, "%s", $1.code) ; }'(' ')' '{' sentencia_var_locales sentencia_r '}' { sprintf (temp, "(defun main ()\n\t(let (%s) %s)\n)", $6.code, $7.code) ;  
                                           $$.code = gen_code (temp) ; }



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_var_locales -> Donde se declaran las variables locales                                                                                        **      
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_var_locales: /*lambda*/              {$$.code = gen_code ("") ; }

            | sentencia_declaraciones ';' sentencia_var_locales { sprintf (temp, "%s\n%s", $1.code, $3.code) ; 
                                           $$.code = gen_code (temp) ; }


            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_r -> Donde se declaran las sentencias, estas pueden tener toda la recursividad que quieran                                                    **   
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_r:   sentencia ';' sentencia_r { sprintf (temp, "\t%s\n\t%s", $1.code, $3.code) ;  
                                           $$.code = gen_code (temp) ; }

            |   sentencia ';'             { sprintf (temp, "\t%s", $1.code) ;  
                                           $$.code = gen_code (temp) ; }

            |   sentencia_estructura_control sentencia_r { sprintf (temp, "\t%s\n\t%s", $1.code, $2.code) ;  
                                           $$.code = gen_code (temp) ; }

            |   sentencia_estructura_control { sprintf (temp, "\t%s", $1.code) ;  
                                           $$.code = gen_code (temp) ; }

            |   '{' sentencia_var_locales sentencia_r '}' sentencia_r { sprintf (temp, "\t(let (%s) %s)\n\t%s", $2.code, $3.code, $5.code) ;  
                                           $$.code = gen_code (temp) ; }

            |   '{' sentencia_var_locales sentencia_r '}'             { sprintf (temp, "\t(let (%s) %s)\n", $2.code, $3.code) ;
                                             $$.code = gen_code (temp) ; }
            
            ;





//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_estructura_control -> Donde se declaran todas las estructuras de control                                                                      **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_estructura_control: WHILE '(' expresion_control ')' '{' sentencia_r '}' { sprintf (temp, "(loop while %s do \n\t%s)", $3.code, $6.code) ;  
                                           $$.code = gen_code (temp) ; }

            | IF '(' expresion_control ')' '{' sentencia_if '}' { sprintf (temp, "(if %s\n\t\t%s)", $3.code, $6.code) ;  
                                           $$.code = gen_code (temp) ; }

            | IF '(' expresion_control ')' '{' sentencia_if '}' ELSE '{' sentencia_if '}' { sprintf (temp, "(if %s\n\t\t%s\n\t\t%s)", $3.code, $6.code, $10.code) ;  
                                           $$.code = gen_code (temp) ; }

            | FOR '(' sentencia_declaraciones ';' expresion_control ';' incremento_decremento ')' '{' sentencia_r '}' { sprintf (temp, "(let (%s)\n(loop while %s do \n\t%s \n\t%s ))", $3.code, $5.code, $10.code, $7.code ) ;  
                                           $$.code = gen_code (temp) ; } 

            | FOR '(' sentencia_asignaciones ';' expresion_control ';' incremento_decremento ')' '{' sentencia_r '}' { sprintf (temp, "%s\n(loop while %s do \n\t%s \n\t%s )", $3.code, $5.code, $10.code, $7.code ) ;  
                                           $$.code = gen_code (temp) ; }

            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_if -> Aquí tenemos las distintas sentencias que se pueden dar en el lenguaje dentro de if, así podemos diferenciar                            **
//  **                  para cuando tenemos una o varias sentencias, y así poder poner progn en caso de tener varias                                            **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_if: sentencia ';'                   {sprintf(temp, "%s", $1.code) ; 
                                               $$.code = gen_code (temp) ; }

            | sentencia ';' sentencia_r         {sprintf(temp, "(progn\n\t%s\n\t%s)", $1.code, $3.code) ; 
                                               $$.code = gen_code (temp) ; }

            | sentencia_estructura_control   {sprintf(temp, "%s", $1.code) ; 
                                               $$.code = gen_code (temp) ; }

            | sentencia_estructura_control sentencia_r {sprintf(temp, "(progn\n\t%s\n\t%s)", $1.code, $2.code) ;
                                                  $$.code = gen_code (temp) ; }
            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_decremento -> Aquí tenemos las distintas sentencias de decremento o incremento que se pueden dar en el lenguaje dentro de un bucle for.       **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



incremento_decremento:   IDENTIF '=' IDENTIF '+' NUMBER { sprintf (temp, "(setq %s (+ %s %d))", $1.code, $3.code, $5.value) ;  
                                           $$.code = gen_code (temp) ; }

            | IDENTIF '=' IDENTIF '-' NUMBER { sprintf (temp, "(setq %s (- %s %d))", $1.code, $3.code, $5.value) ;  
                                           $$.code = gen_code (temp) ; }

            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia -> Aquí tenemos las distintas sentencias que se pueden dar en el lenguaje dentro de una función o el main, además todas acaban con ';'        **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia:   PRINTF '(' STRING ',' expresion_sucesion_imprimir ')'  { sprintf (temp, "%s", $5.code) ;  
                                           $$.code = gen_code (temp) ; }

            | PUTS '(' STRING ')'  { sprintf (temp, "(print \"%s\")", $3.code) ;  
                                           $$.code = gen_code (temp) ; }
            
            | IDENTIF '(' expresion_sucesion ')' { sprintf (temp, "(%s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }

            | IDENTIF '(' ')' { sprintf (temp, "(%s)", $1.code) ;
                                           $$.code = gen_code (temp) ; }  

            | sentencia_asignaciones { sprintf (temp, "\t%s", $1.code) ;  
                                           $$.code = gen_code (temp) ; } 

            | RETURN expresion_sucesion { sprintf (temp, "(\treturn-from %s (values %s))",memoria, $2.code) ; 
                                             $$.code = gen_code (temp) ; }

            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_declaraciones -> Aquí declaramos las variables locales y los vectores por primera vez, utilizando el int antes.                               **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_declaraciones: INTEGER IDENTIF '=' expresion ',' sentencia_declaracion_sucesion { sprintf (temp, "(%s %s) %s", $2.code, $4.code, $6.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF '=' expresion { sprintf (temp, "(%s %s)", $2.code, $4.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF ',' sentencia_declaracion_sucesion { sprintf (temp, "(%s 0) %s", $2.code, $4.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF { sprintf (temp, "(%s 0)", $2.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF '[' expresion ']' ',' sentencia_declaracion_sucesion { sprintf (temp, "(%s (make-array %s)) %s", $2.code, $4.code, $6.code) ; 
                                           $$.code = gen_code (temp) ; }

            | INTEGER IDENTIF '[' expresion ']' { sprintf (temp, "(%s (make-array %s))", $2.code, $4.code) ;
                                                $$.code = gen_code (temp) ; }
    
            ;        


//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_declaracion_sucesion -> ESto se usa para cuando tenemos que declarar varias variables y vectores a la vez en la misma línea                   **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_declaracion_sucesion:    IDENTIF '=' expresion ',' sentencia_declaracion_sucesion { sprintf (temp, "(%s %s) %s", $1.code, $3.code, $5.code) ; 
                                           $$.code = gen_code (temp) ; }

            | IDENTIF '=' expresion { sprintf (temp, "(%s %s)", $1.code, $3.code) ;
                                             $$.code = gen_code (temp) ; }

            | IDENTIF ',' sentencia_declaracion_sucesion { sprintf (temp, "(%s 0) %s", $1.code, $3.code) ; 
                                           $$.code = gen_code (temp) ; }

            | IDENTIF { sprintf (temp, "(%s 0)", $1.code) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF '[' expresion ']' '=' expresion ',' sentencia_declaracion_sucesion { sprintf (temp, "((aref %s %s) %s) %s", $1.code, $3.code, $6.code, $8.code) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF '[' expresion ']' '=' expresion  { sprintf (temp, "((aref %s %s) %s)", $1.code, $3.code, $6.code) ;
                                                $$.code = gen_code (temp) ; }
            
            ;     



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_asignaciones -> Aquí se hace la asignación de variables y vectores                                                                            **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_asignaciones:  IDENTIF '=' expresion ',' sentencia_asignacion_sucesion { sprintf (temp, "(setq %s %s) %s", $1.code, $3.code, $5.code) ; 
                                           $$.code = gen_code (temp) ; }

            | IDENTIF '=' expresion { sprintf (temp, "(setq %s %s)", $1.code, $3.code) ;
                                             $$.code = gen_code (temp) ; }

            | IDENTIF '[' expresion ']' '=' expresion ',' sentencia_asignacion_sucesion { sprintf (temp, "(setf (aref %s %s) %s) %s", $1.code, $3.code, $6.code, $8.code) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF '[' expresion ']' '=' expresion  { sprintf (temp, "(setf (aref %s %s) %s)", $1.code, $3.code, $6.code) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF ',' asignacion_sucesion '=' IDENTIF ',' asignacion_sucesion  { sprintf (temp, "(setf (values %s %s) (values %s %s))", $1.code, $3.code, $5.code, $7.code) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF ',' asignacion_sucesion '=' SWAP '(' IDENTIF ',' asignacion_sucesion ')' { sprintf (temp, "(setf (values %s %s) (swap %s %s))", $1.code, $3.code, $7.code, $9.code) ;
                                                $$.code = gen_code (temp) ; }
    
            ;   



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Sentencia_asignacion_sucesion -> ESto se usa para cuando tenemos que declarar varias variables y vectores a la vez en la misma línea                    **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



sentencia_asignacion_sucesion:    IDENTIF '=' expresion ',' sentencia_asignacion_sucesion { sprintf (temp, "(setq %s %s) %s", $1.code, $3.code, $5.code) ; 
                                           $$.code = gen_code (temp) ; }

            | IDENTIF '=' expresion { sprintf (temp, "(setq %s %s)", $1.code, $3.code) ;
                                             $$.code = gen_code (temp) ; }

            | IDENTIF ',' sentencia_asignacion_sucesion { sprintf (temp, "(setq %s 0) %s", $1.code, $3.code) ; 
                                           $$.code = gen_code (temp) ; }

            | IDENTIF { sprintf (temp, "(setq %s 0)", $1.code) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF '[' expresion ']' '=' expresion ',' sentencia_asignacion_sucesion { sprintf (temp, "(setf (aref %s %s) %s) %s", $1.code, $3.code, $6.code, $8.code) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF '[' expresion ']' '=' expresion  { sprintf (temp, "(setf (aref %s %s) %s)", $1.code, $3.code, $6.code) ;
                                                $$.code = gen_code (temp) ; }
            
            ;     



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Asignacion_sucesion -> Esto es útil para cuando tenemos distintas asignaciones en una misma línea separadas por una coma                                **                                               
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



asignacion_sucesion:  IDENTIF ',' asignacion_sucesion { sprintf (temp, "%s %s", $1.code, $3.code) ; 
                                           $$.code = gen_code (temp) ; }

            | IDENTIF { sprintf (temp, "%s", $1.code) ;
                                                $$.code = gen_code (temp) ; }
            
            ;   



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Expresion-sucesion_imprimir -> Esto es útil para cuando tenemos distintas expresiones en una misma línea separadas por una coma para imprimirlas        **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



expresion_sucesion_imprimir: expresion ',' expresion_sucesion_imprimir { sprintf (temp, "(print %s) %s", $1.code, $3.code) ;  
                                           $$.code = gen_code (temp) ; }
            | expresion                  { sprintf (temp, "(print %s)", $1.code) ;  
                                           $$.code = gen_code (temp) ; }
            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Expresion_sucesion -> Esto es útil para cuando tenemos distintas expresiones en una misma línea separadas por una                                       **
//  **                        coma para returns o parámetros de funciones.                                                                                      **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



expresion_sucesion: expresion ',' expresion_sucesion { sprintf (temp, "%s %s", $1.code, $3.code) ;  
                                           $$.code = gen_code (temp) ; }
            | expresion                  { sprintf (temp, "%s", $1.code) ;  
                                           $$.code = gen_code (temp) ; }
            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Expresion -> Tenemos distintas expresiones, estas pueden ser expresiones aritméticas o directamente un término.                                         **                                                               **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************

       
          
expresion:      termino                  { $$ = $1 ; }

            |   expresion_operacion      { $$ = $1 ; }

            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Expresion_operacion -> Tenemos distintas expresiones de operaciones, cada una de ellas con su código asociado.                                          **
//  **                         También podemos tener alguna expresión de control que no sea una operación.                                                      **                                               
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************




expresion_operacion: expresion '+' expresion  { sprintf (temp, "(+ %s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            |   expresion '-' expresion  { sprintf (temp, "(- %s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            |   expresion '*' expresion  { sprintf (temp, "(* %s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            |   expresion '/' expresion  { sprintf (temp, "(/ %s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }

            |   expresion '%' expresion  { sprintf (temp, "(mod %s %s)", $1.code, $3.code) ;
                                             $$.code = gen_code (temp) ; }

            |   IDENTIF '(' expresion_sucesion ')' { sprintf (temp, "(%s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }

            |   IDENTIF '(' ')' { sprintf (temp, "(%s)", $1.code) ;
                                           $$.code = gen_code (temp) ; }

            |   expresion EQUAL expresion  { sprintf (temp, "(= %s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }

            |   expresion NOT_EQUAL expresion  { sprintf (temp, "(/= %s %s)", $1.code, $3.code) ;
                                             $$.code = gen_code (temp) ; }

            |   expresion '<' expresion   { sprintf (temp, "(< %s %s)", $1.code, $3.code) ;   
                                             $$.code = gen_code (temp) ; }          

            |   expresion '>' expresion   { sprintf (temp, "(> %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
                                            
            |   expresion AND expresion   { sprintf (temp, "(and %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }

            |   expresion OR expresion     { sprintf (temp, "(or %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }   

            ;





//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Expresion_control -> Tenemos distintas expresiones de control, que son las que se usan en los condicionales y en los bucles.                            **
//  **                       Si se escribe una expresión aritmética se convertirá en una expresión booleana mediante (/= 0 expresion)                           **                                               
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



expresion_control:  expresion EQUAL expresion { sprintf (temp, "(= %s %s)", $1.code, $3.code) ;
                                             $$.code = gen_code (temp) ; }
            |   expresion NOT_EQUAL expresion { sprintf (temp, "(/= %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion '<' expresion  { sprintf (temp, "(< %s %s)", $1.code, $3.code) ;
                                             $$.code = gen_code (temp) ; } 
            |   expresion '>' expresion  { sprintf (temp, "(> %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion LESS_EQUAL expresion { sprintf (temp, "(<= %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion GREATER_EQUAL expresion { sprintf (temp, "(>= %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion AND expresion { sprintf (temp, "(And %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion OR expresion { sprintf (temp, "(or %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion '+' expresion  { sprintf (temp, "(/= 0 (+ %s %s))", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion '-' expresion  { sprintf (temp, "(/= 0 (- %s %s))", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   expresion '*' expresion  { sprintf (temp, "(/= 0 (* %s %s))", $1.code, $3.code) ;   
                                                $$.code = gen_code (temp) ; }
            |   expresion '/' expresion  { sprintf (temp, "(/= 0 (/ %s %s))", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }       
            |   expresion '%' expresion  { sprintf (temp, "(/= 0 (mod %s %s))", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   IDENTIF '(' expresion_sucesion ')' { sprintf (temp, "(/= 0 (%s %s))", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            |   IDENTIF '(' ')' { sprintf (temp, "(/= 0 (%s))", $1.code) ;
                                                $$.code = gen_code (temp) ; }
            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Termino -> Podemos tener los valores del operando positivos o negativos, o bien el operando en si mismo                                                 **
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



termino:        operando                           { $$ = $1 ; }                          
            |   '+' operando %prec UNARY_SIGN      { sprintf (temp, "(+ %s)", $2.code) ;
                                                     $$.code = gen_code (temp) ; }
            |   '-' operando %prec UNARY_SIGN      { sprintf (temp, "(- %s)", $2.code) ;
                                                     $$.code = gen_code (temp) ; }    
            ;



//  **************************************************************************************************************************************************************
//  **                                                                                                                                                          **
//  **  Operando -> Podemos distinguir entre identificadores, numeros, expresiones entre parentesis y llamadas a funciones como operandos                       **                                               
//  **                                                                                                                                                          **
//  **************************************************************************************************************************************************************



operando:       IDENTIF                  { sprintf (temp, "%s", $1.code) ;
                                           $$.code = gen_code (temp) ; }
            |   NUMBER                   { sprintf (temp, "%d", $1.value) ;
                                           $$.code = gen_code (temp) ; }
            |   '(' expresion ')'        { $$ = $2 ; }

            |   IDENTIF '[' expresion ']'   { sprintf (temp, "(aref %s %s)", $1.code, $3.code) ;
                                           $$.code = gen_code (temp) ; }
            ;


%%                            // SECCION 4    Codigo en C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No memoria left for additional %d bytes\n", nbytes) ;
        fprintf (stderr, "%ld bytes reserved in %d calls\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "while",       WHILE,
    "if",          IF,
    "else",        ELSE,
    "for",         FOR,
    "return",      RETURN,
    "||",          OR,
    "&&",          AND,
    "==",          EQUAL,
    "!=",          NOT_EQUAL,
    "<=",          LESS_EQUAL,
    ">=",          GREATER_EQUAL,
    "swap",        SWAP,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] = "!<=>|%/&+-*$,{}" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == '\r' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // busca c en operadores expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
