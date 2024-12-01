#include "include/func.h"
#include <stdio.h>
void text(void){
    char tekst[102];
    int i ;
    fgets(tekst, 102, stdin);

    for (i = 0 ; i < 102; i++){
        if (tekst[i] == '\n'){
            tekst[i] = '\0';
            break;
        }
        if (tekst[i]=='\0'){
            break;
        }
    }

    for (i = 0 ; tekst[i]!='\0';i++){
        if (tekst[i] != ' '){
            printf("%c", tekst[i]-32);
        }else{
            printf("%c", tekst[i]);
        }
        
    }
    printf("\n");

}