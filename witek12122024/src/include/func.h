#ifndef FUNC_H
#define FUNC_H

double  sarytmetyczna_przedzial(int pocz , int koniec, int d );
void dispsrednia(void);
void sotrowanie_wstawianie(float* liczby, int d);
double mediana(double* liczby, int d);
void dispmediana(void);
void alfabet(void);
void text(void);
double* rownaniekwadr();
void wielomain(void);
void sprawdzp(void);
void ryschoina(int a);
void przedzial(void);
void przedzialvII(void);
void wypelnij(void);
void trojkot(void);
char* odwroc();
void zliczanie(void);
void transpozycja(void);
void sprawdztroj(void);
long double potega(int  n, double m);
void wlasnoscitab(float* tab);
void wlasnoscitekstu(void);
void handler();

typedef struct P{
    double x;
    double y;
} point;


#endif
