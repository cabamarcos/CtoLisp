#include <stdio.h>
// "Esta funcion no devuelve nada" 42 10 6 10 20 30 



funcion_sin_retorno() {
  puts("Esta funcion no devuelve nada");
}

funcion_con_retorno() {
  return 42;
}

funcion_con_argumento(int a) {
    int resultado = a * 2;
  return resultado;
}

funcion_con_lista_de_argumentos(int a, int b, int c) {
    int resultado = a + b + c;
  return resultado;
}

funcion_usada_como_procedimiento(int a, int b) {
  printf("La suma es:\n", a, b, a + b);
}

main() {
  int retorno;
  int argumento;
  int resultado;
  int argumento1;
  int argumento2;
  int argumento3;
  int resultado2;


  funcion_sin_retorno();
  
  retorno = funcion_con_retorno();
  printf("El retorno de la funcion con retorno es: %d\n", retorno);
  
  argumento = 5;
  resultado = funcion_con_argumento(argumento);
  printf("El resultado de la funcion con argumento es: %d\n", resultado);
  
  argumento1 = 1;
  argumento2 = 2;
  argumento3 = 3;
  resultado2 = funcion_con_lista_de_argumentos(argumento1, argumento2, argumento3);
  printf("El resultado de la funcion con lista de argumentos es: %d\n", resultado2);
  
  funcion_usada_como_procedimiento(10, 20);
  
}

//@ (main)

