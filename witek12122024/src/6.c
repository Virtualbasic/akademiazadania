#include <stdio.h>
#include "include/func.h"

void wielomain(){
    double x;
    long double W;
    printf("podaj x do rownania x^3 + 2x^2 + 4x +10");
    scanf("%lf",&x);
    W = potega(3, x) + 2 *(potega(2, x)) + 4*x +10;
    printf("wynik rownania x^3 + 2x^2 + 4x +10 = %Lf \n", W);

}

long double potega(int n , double m ){
    long double w = 1;
    while (n > 0){
        w*=m;
        n--;
    }
    return w;

}
