#include <stdio.h>

void wyswietl(double (*nums)[3]);

void transpozycja(){
    int i,j,iorient=0;
    double A[3][3];
    double tmp;
    
    printf("podaj liczby\n");
    for(i=0 ; i < 3 ;i++){
        for(j=0 ; j <3 ; j++){
            printf("A[%d][%d] ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }
    wyswietl(A);
    i=0;
    j=1;
    while (iorient<3){
        tmp = A[i][j] ;
        A[i][j] = A[j][i];
        A[j][i] = tmp;
        ++iorient;
        if(iorient%2!=0){
            j++;
        }else{
            j--;
            i+=2;
        } 
    }
    
    printf("\n");
    wyswietl(A);
    

}


void wyswietl(double (*nums)[3]){
    int i,j;
    for(i = 0 ; i <3; i++){
        for(j=0;j<3;j++){
            printf("%2.2lf ", nums[i][j]);
        }
        printf("\n");
    }
}