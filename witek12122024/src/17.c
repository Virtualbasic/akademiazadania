#include "include/func.h"
#include <stdlib.h>
#include <stdio.h>

void disp(float* tab){
    int i;
    for(i = 0 ; i < 8 ; i++){
        printf("%.2f ",tab[i]);
    }
}
float* sum(float* tab){
    int i;
    float* handler = malloc(4 * sizeof(float));
    float sum =0;
    float srednia;
    float najmniejsza = tab[0];
    float najwieksza = 0;
    for(i = 0; i < 8; i++){
        if (tab[i] > najwieksza){
            najwieksza = tab[i];
        }else if(najmniejsza> tab[i]){
            najmniejsza = tab[i];
        }
        sum+=tab[i];
    }
    srednia = sum/8;
    handler[0]= srednia;
    handler[1] = sum;
    handler[2] = najmniejsza;
    handler[3] = najwieksza;

    return handler;
}





void wlasnoscitab(float* tab){
    printf("tablica przed sortowaniem\n");
    disp(tab);
    printf("\n");
    sotrowanie_wstawianie(tab, 8);
    printf("tablica po sortowaniu  sortowaniem\n");
    disp(tab);
    printf("\n");
    float* dane = sum(tab);
    printf("wartosc najmniejsza %.2f\n" , dane[2]);
    printf("wartosc najwieksza %.2f\n", dane[3]);
    printf("suma wszystkich elementow %.2f\n", dane[1]);
    printf("srednia wszystkich elementow %.2f\n", dane[0]);

}


