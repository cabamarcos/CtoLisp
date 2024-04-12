#include <stdio.h>
// 3 0 1 0 3 1

int swap (int a,int b) {
    return b, a;
}

main(){
    int a = 1;
    int b = 3;
    int c = 0;
    a, b, c = b, c, a;
    printf ("%d %d %d\n", a, b, c) ;

    a, b = swap (a, b) ; 
    printf ("%d %d %d\n", a, b, c) ;

}

//@ (main)

