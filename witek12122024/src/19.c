#include <math.h>
#include <stdio.h>
#include "include/func.h"

void printPoint(struct  P *p , int n);
double sideLength(struct  P *p1 , struct  P *p2,int pp , int pp2);
double triangleCircumference(double AB, double AC , double BC);
double triangleArea(double A, double B , double C);
int czyT(double* dlugosci);

void handler(void){
    point  p1;
    point  p2;
    point  p3;
    double AB , AC, BC , obw, pom[3], pole;
    int f;
    printf("Podaj współżędne punktu p1\nx:");
    scanf("%lf", &p1.x);
    printf("y:");
    scanf("%lf", &p1.y);
    printf("Podaj współżędne punktu p2\nx:");
    scanf("%lf", &p2.x);
    printf("y:");
    scanf("%lf", &p2.y);
    printf("Podaj współżędne punktu p3\nx:");
    scanf("%lf", &p3.x);
    printf("y:");
    scanf("%lf", &p3.y);

    printPoint( &p1,1);
    printPoint( &p2,2);
    printPoint( &p3,3);

    pom[0] = AB = sideLength(&p1, &p2, 1, 2);
    pom[1] = AC = sideLength(&p1, &p3, 1, 3);
    pom[2] = BC = sideLength(&p2, &p3, 2, 3);
    f = czyT(pom);
    if (f ==1){
        obw = triangleCircumference( AB,  AC,  BC);
        
        pole = triangleArea(AB,AC,BC);
        printf("\n\n\n\n");
        printf("wyniki\n");
        printf("punkty p1 x = %.2lf ,y = %.2lf p2 x = %.2lf ,y = %.2lf  p3 x = %.2lf ,y = %.2lf  \n", p1.x , p1.y, p2.x , p2.y , p3.x ,p3.y);
        printf("boki AB  %.3lf  AC %.3lf BC %.3lf \n" ,AB,AC,BC);
        printf("obwód %.3lf\n", obw);
        printf("pole %.3lf\n", pole);

    }else{
        printf("z danych bokow nie można zbudować trójkąta\n");
    }
    

    
}

void printPoint(struct  P *p,int n){
    printf("punkt p%d", n);
    printf("x = %.2lf , y = %.2lf \n" , p->x,p->y);
}

double sideLength(struct  P *p1 , struct  P *p2, int pp , int pp2){
    double L;
    L = sqrt(pow((p2->x - p1->x), 2) + pow((p2->y - p1->y), 2));
    printf("dlugosc pomiedzy p%d i p%d wynosi %.3lf\n", pp, pp2 , L);
    return L;
}

double triangleCircumference(double AB, double AC , double BC){
    double obw;
    obw = AB + BC + AC;
    printf("obwód wynosi %.3lf\n",obw);
    return obw;
}

int czyT(double* dlugosci){
    double najd = 0;
    int najindex = 0;
    int i;
    double sumapozostalych=0;
    for(i = 0; i < 3 ; i++){
        if(dlugosci[i]>najd){
            najd = dlugosci[i];
            najindex = i;
        }
        sumapozostalych+=dlugosci[i];
    }
    if (sumapozostalych-dlugosci[najindex] > najd){
        return 1;
    }else{
        return 0;
    }
}

double triangleArea(double A, double B , double C){
    double p, P;
    p = (A + B +C)/2;
    P = sqrt(p*(p-A)*(p-B)*(p-C));
    printf("Pole trojkota wynosi %lf\n", P);
    return P;
}