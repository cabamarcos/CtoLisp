#include <stdio.h>
//a es menor que b y b es menor que c
main() {
    int a = 2, b = 3, c = 4;
    if (a < b && b < c) {
        puts("a es menor que b y b es menor que c");
    } else {
        puts("no se cumple la condición");
        a = 7;
    }
}

//@ (main) 

