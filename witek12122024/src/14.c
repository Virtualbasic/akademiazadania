#include <stdio.h>
void zliczanie(){
    int n, i,z;
    char l;
    printf("ustal wielkosc bufforu : ");
    scanf("%d", &n);
    getchar();
    printf("\n");

    char buffor[n];

    printf("wpisz tekest: " );
    fgets(buffor, n , stdin);
    do{
        printf("jaką litere chcesz szukac w tekscie ?");
        scanf(" %c", &l);
        printf("\n");
    }while(l<65 || l>122);
    
    

    for(i = 0 ; i < n ; i++){
        if(buffor[i]== l || buffor[i] == l-32 || buffor[i]==l+32){
            z++;
        }
    }
    printf("%c %d \n", l , z );
}
