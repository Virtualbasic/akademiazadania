#include "include/func.h"
#include <stdio.h>
#include <math.h>
void sprawdztroj(){
    int i,j;
    double punkty[3][3];
    char pkt[3]= {'a', 'b', 'c'};
    double AB;
    double BC;
    double AC;
    double dlogosci[3];
    printf("podaj wspolzedne punktow kolejno a, b ,c   odpowiednio x y z :\n");
    for (i = 0 ; i < 3; i++) {
        printf("punkt %d\n", i+1);
        for(j =0 ; j < 3 ; j++){
            printf("podaj %d wspolzedna punktu\n", j+1);
            scanf("%lf", &punkty[i][j]);
        }
    }
    
    for(i = 0 ; i < 3 ; i++){
        printf("punkt %c\n", pkt[i]);
        printf("X  Y  Z\n");
        for(j =0; j< 3; j++){
            printf("%2.2lf ", punkty[i][j]);
        }
        printf("\n");
    }

    AB = sqrt(potega(2, (punkty[1][0] - punkty[0][0])) + potega(2, (punkty[1][1] - punkty[0][1])) + potega(2,(punkty[1][2] - punkty[0][2])));
    BC = sqrt(potega(2, (punkty[2][0] - punkty[1][0])) + potega(2, (punkty[2][1] - punkty[1][1])) + potega(2,(punkty[2][2] - punkty[1][2])));
    AC = sqrt(potega(2, (punkty[2][0] - punkty[0][0])) + potega(2, (punkty[2][1] - punkty[0][1])) + potega(2,(punkty[2][2] - punkty[0][2])));
    dlogosci[0]=AB;
    dlogosci[1]=BC;
    dlogosci[2]=AC;
    printf("dlugosc AC= %lf \n", AC);
    printf("dlugosc BC= %lf \n", BC);
    printf("dlugosc AB= %lf \n", AB);

    double najd = 0;
    int najindex = 0;
    double sumapozostalych=0;
    for(i = 0; i < 3 ; i++){
        if(dlogosci[i]>najd){
            najd = dlogosci[i];
            najindex = i;
        }
        sumapozostalych+=dlogosci[i];
    }

    if (sumapozostalych - dlogosci[najindex] > najd){
        printf("z tych punktow po poloczeniu  powstanie trojkat\n");
    }else{
        printf("z tych punktow po poloczeniu nie powstanie trojkat\n");
    }


}