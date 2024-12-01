#include "include/func.h"
#include <stdio.h>

void alfabet(){
    int a = 97;
    int A = a-32;
    int i;
    for (i = a; i<=122;i++){
        printf("%c ", i);
    }
    printf("\n");
    for (i = A; i<=90;i++){
        printf("%c ", i);
    }
    printf("\n");
}