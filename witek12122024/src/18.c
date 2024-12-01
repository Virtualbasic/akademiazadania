#include <stdio.h>
#include "include/func.h"
void menu();
void pokaztekst(char* tekst);
void ilerazy(char* teskts , int m);

void wlasnoscitekstu(){
    char tekst[100];
    int wybor=0;
    while(1==1){
        printf("wpisz tekst ktory chcesz sprawdzic: \n");
        fgets(tekst, 100, stdin);
        printf("\n");
        
        do{
            menu();
            scanf("%d", &wybor);
            printf("\n");
            switch (wybor) {
                case 2:
                    pokaztekst(tekst);
                    break;
                case 3:
                    ilerazy(tekst,  3);
                    break;
                case 4:
                    ilerazy(tekst, 4);
                    break;
                case 5:
                    ilerazy(tekst, 5);
                    break;
                case 6:
                    ilerazy(tekst, 6);
                    break;
                case 7:
                    ilerazy(tekst, 7);
                    break;

            }

        }while (wybor!=1 || (wybor<0 || wybor>7));

        if (wybor==1){
            break;
        }
     }


}
void ilerazy(char* teskts, int m ){
    int  i,z, il;
    char l;
    

    switch (m) {
        case 3:
            printf("jaką litere / znak chcesz szukac w tekscie ?");
            scanf(" %c", &l);
            printf("\n");
            
            if (l>65 && l <122 ){
                for(i = 0 ; i < 100 ; i++){
                    if(teskts[i] == '\0'){
                        break;
                    }
                    if(teskts[i]== l || teskts[i] == l-32 || teskts[i]==l+32){
                        z++;
                    }
                }
            }else{
                for(i = 0 ; i < 100 ; i++){
                    if(teskts[i] == '\0'){
                        break;
                    }
                    if(teskts[i]== l){
                        z++;
                    }
                }
            }
            printf("%c %d \n\n", l , z );
            break;
        case 4:
            for(i = 0 ; i < 100 ; i++){
                if(teskts[i] == '\0'){
                    break;
                }
                if (teskts[i]>=65 && teskts[i]<=122){
                    il++;
                }
            }
            printf("ilosc liter w tekscie %d \n\n", il);
            break;
        case 5:
            for(i = 0 ; i < 100 ; i++){
                if(teskts[i] == '\0'){
                    break;
                }
                if (teskts[i]>=48 && teskts[i]<=57){
                    il++;
                }
            }
            printf("ilosc cyfr w tekscie %d \n\n", il);
            break;
        case 6:
            for(i = 0 ; i < 100 ; i++){
                if(teskts[i] == '\0'){
                    break;
                }
                if (teskts[i]==' '){
                    il++;
                }
            }
            printf("ilosc spacji w tekscie %d \n\n", il);
            break;
        case 7:
            for(i = 0 ; i < 100 ; i++){
                if(teskts[i] == '\0'){
                    break;
                }
                if ((teskts[i]>=33 && teskts[i]<=47)||(teskts[i]>=58 && teskts[i]<=63)||(teskts[i]>=91 && teskts[i]<=96)||(teskts[i]>=123 && teskts[i]<=126)){
                    il++;
                }
            }
            printf("ilosc kropek , przecinków i innych znaków w tekscie %d \n\n", il);
            break;
    }

    
}



void pokaztekst(char* tekst ){
    int i;
    
    for (i =0 ; i < 100; i++){
        if (tekst[i] == '\0'){
            break;
        }
        printf("%c", tekst[i]);
    }
}


void menu(){
    printf("1 aby wyjsc z programu\n");
    printf("2 wyswietl wpisany teskt\n");
    printf("3 wyswietl ilosc wystapien znaku ktory wybierzesz\n");
    printf("4 wyswietl ilosc liter w tekscie\n");
    printf("5 wyswietl ilosc cyfr w tekscie\n");
    printf("6 wyswietl ilosc spacji w tekscie\n");
    printf("7 wyswietl ilosc kropek , przecinkow i innych znakow w tekscie\n");
}