#include "include/func.h"
#include <stdio.h>
void dispsrednia(){
    int pocz;
    int koniec;
    int d;
    int i;
    printf("podaj poczotek przedzialu od strony lewej czyli - inf: ");
    scanf("%d", &pocz);
    printf("podaj koniec przedzialu: ");
    scanf("%d", &koniec);
    if (koniec < 0 && pocz <0){
        d = pocz * -1 + koniec;
    }else if (pocz < 0 && koniec>0){
        for (i = pocz ; i <= koniec; i++){
            d++;
        }
    }else{
        d = koniec - pocz;
    }


    printf("srednia arytmetyczna wynosi %.2lf \n",sarytmetyczna_przedzial(pocz,koniec,d));

}

void dispmediana(){
    int pocz=0;
    int koniec=0;
    int d = 0;
    int i;
    do{
        printf("podaj przedzial liczb , przedzial może zawierać maksymalnie 30 liczb wraz z liczbami krancowymi\n");
        printf("podaj poczotek");
        scanf("%d" , &pocz);
        printf("podaj koniec");
        scanf("%d", &koniec);
        if (koniec < 0 && pocz <0){
            d = pocz * -1 + koniec;
        }else if (pocz < 0 && koniec>0){
            for (i = pocz ; i <= koniec; i++){
                d++;
            }
        }else{
            d = koniec+1 - pocz;
        }
        if (d > 30){
            printf("liczb jest za dużo , podaj inny przedział\n");
        }
    }while(d > 30);

   

    int index =0;
    double liczby[koniec-pocz];
    for ( i = pocz ; i <= koniec; i++){
        liczby[index] = i;
        index++;
    }
    printf ("mediana = %lf \n",mediana(liczby, d));


}
    