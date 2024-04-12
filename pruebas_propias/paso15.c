#include <stdio.h>
// 0 "El siguiente valor es constante" 5 1 "El siguiente valor es constante" 5 2 ..... 9 "El siguiente valor es constante" 5

main() {
    int i;
    int c = 5;
    for (i = 0; i < 10; i = i + 1) {

        printf("El valor de i es: %d\n", i);
        puts("El siguiente valor es constante");
        printf("%d\n", c);

    }
    
}


//@ (main)

