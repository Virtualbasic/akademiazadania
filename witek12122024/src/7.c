#include <stdio.h>

void sprawdzp(){
    long int n=1;
    do{
        printf("podaj liczbe jak podasz 0 program przestanie sie zapetlac a ja podasz inna liczbe program sprawdzi czy jest parzysta\n");
        scanf("%ld", &n);
        if(n % 2 == 0){
            printf("parzysta\n");
        }else{
            printf("nie parzysta\n");
        }
    }while(n!=0);


}