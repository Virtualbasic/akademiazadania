#include <stdio.h>
void trojkot(){
    int i,j, pom,a;
    printf("podaj a: ");
    scanf("%d", &a);
    char M[a][a];
    for(i = 0 ; i < a; i++){
        for(j = 0 ; j < a ; j++){
            M[i][j]= ' ';
        }
    }
    pom = a -1;
    
    for(i = 0; i < a ; i++){
        M[i][0] = '*';
        M[0][i] = '*';
        M[i][pom] = '*';
        pom--;
    }
    for(i = 0 ; i < a; i++){
        for(j = 0 ; j < a ; j++){
           printf("%c", M[i][j]);
        }
        printf("\n");
    }
    
}