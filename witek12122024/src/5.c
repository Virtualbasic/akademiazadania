#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double* rownaniekwadr(){
    double a;
    double b; 
    double c;
    double* pierwiastki = malloc(2 * sizeof(double));
    double delta;
    double pdelta;
    
    pierwiastki[0] = 0.0;
    pierwiastki[1] = 0.0;

    printf("podaj kolejno parametry a b c \n");
    printf("a");
    scanf("%lf", &a);
    printf("b");
    scanf("%lf", &b);
    printf("c");
    scanf("%lf", &c);
    printf("\n");

    if (a > 0 && b > 0 && c > 0){
        delta = b*b - 4*a*c;
        if (delta>0){
            pdelta = sqrt(delta);
            pierwiastki[0] = (-b + pdelta)/(2*a);
            pierwiastki[1] = (-b - pdelta)/(2*a);
        }else{
            printf("brak rozwiozan w zbiorze liczb rzeczywistych");
        }
    }else if(a == 0 && b > 0 && c > 0 ){
        pierwiastki[1] = -c/b;
        pierwiastki[0] = -c/b;
    }else{
        printf("brak rozwiozan albo inne rownanie np tozsamosciowe");
    }
    printf("pierwiastki wynosza x1 = %lf , x2 =%lf \n", pierwiastki[1], pierwiastki[0]);

    return pierwiastki;
}