#include <stdio.h>
// "Equal" "Different" "Different"

test (int a, int b) {
    if (a-b) {
        puts ("Different") ;
    } else {
        puts ("Equal") ;
    }
}

main () {
    test (1, 1) ;
    test (1, 2) ;
    test (2, 1) ;
}

//@ (main)

