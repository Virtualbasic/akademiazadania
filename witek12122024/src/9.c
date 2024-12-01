#include <stdio.h>

void przedzial(){
    int pon, kon,i;

    do{
        printf("podaj wartośc graniczne przedzialu: \n");
        printf("poczatek: ");
        scanf("%d", &pon);
        printf("koniec: ");
        scanf("%d", &kon);
    }while(pon >kon);

    for(i = pon ; i <=kon; i++){
        if(i%3==0){
            printf("liczba %d jest podzielna przez 3 \n", i);
        }
    }



}