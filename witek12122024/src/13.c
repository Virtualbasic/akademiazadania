#include <stdio.h>
#include <stdlib.h>

/*
jak potrzebujemy tylko przekazac bez możliości automatyzacji inputu to pozbywamy sie 
lini od 12 do 17 , a w funkcji przekazujemy char* buffor
*/

char* odwroc(){
    int i,  L=0, indx;
    char pom;
    char* buffor = malloc(200);
    for(i= 0; i < 200 ; i++){
        buffor[i] = '*';
    }
    printf("podaj teskt max 200 znakow\n");
    fgets(buffor, 200, stdin);
    for (i = 0; i < 200; i++){
        if (buffor[i]=='*'){
            break;
        }
        L++;
    }
    
    indx = L-1;
    for (i = 0 ; i < L/2; i++){
        pom = buffor[i];
        buffor[i] = buffor[indx];
        buffor[indx] = pom;
        indx--;
    }
    
    return buffor;
}