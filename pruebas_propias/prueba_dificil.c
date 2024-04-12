#include <stdio.h>



funcion (int a, int b, int n) {
	int resultado_funcion;

	if (n < 2) {
		resultado_funcion = b ;
	} else {
		resultado_funcion = funcion (a, n+2 , n-1*8/1) ;
	}

	return resultado_funcion;
}

main ()
{
	int resultado;
	int i ;

    for (i = 0 ; i < 22 ; i = i + 3) {
		resultado = funcion (4, 2, i) ;
		puts ("Esto es una prueba") ;
		printf ("%d %d\n", i, resultado) ;
    }
    printf ("%d\n", resultado + 3) ;
}

//@ (main)

