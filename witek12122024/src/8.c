#include <stdio.h>

void  ryschoina(int a){
    int spac = a;
    int pom = 1;
    int i;
    while (a > 0){
        for (i = 0 ; i < spac ;i++){
            printf(" ");
        }
        for (i = 0 ; i <pom; i++){
            printf("* ");
        }
        printf("\n");
        a--;
        pom+=1;
        spac--;
        
    }

}