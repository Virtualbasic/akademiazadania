#include <stdio.h>

void przedzialvII(){
    int pon, kon,i , tmp;
    printf("podaj wartośc graniczne przedzialu: \n");
    printf("poczatek: ");
    scanf("%d", &pon);
    printf("koniec: ");
    scanf("%d", &kon);
    if (pon > kon){
        tmp = pon;
        pon = kon;
        kon = pon;
    }
    tmp = 0;
    for (i = pon; i <= kon ; i++){
        if(tmp % 5 == 0){
            printf("%d ", i);
        }
        tmp++;
    }
}