/*
wiec tak to sortowanie napisałem i ono działa ale 
skapmąłem się po fakcie że przecież przedział już jest posortowany rosnąco 
więc tak naprawde ta funkcja nie ma tu żadnego urzytku

*/

void sotrowanie_wstawianie(float* liczby , int d){
    int index = 1;
    int j;
    double tmp;
    while (index<d){
        tmp = liczby[index];
        j = index -1;
        while ( j >=0 && liczby[j] > tmp ){
            liczby[j+1]=liczby[j];
            j=j-1;
        }
        liczby[j+1]= tmp;
        index +=1;
    }
}
double mediana(double* liczby, int d){
    
    //sotrowanie_wstawianie(liczby, d);

    if (d %2 == 0){
        return  (liczby[(int)(d/2)] + liczby[(int)((d/2)+1)]) /2;
    }else{
        return liczby[(int)(d/2)-1];
    }
    
}

