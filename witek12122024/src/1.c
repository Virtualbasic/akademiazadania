double sarytmetyczna_przedzial(int pocz , int koniec , int d){
    double s =0;
    int i;
    for (i = pocz; i<=koniec; i++){
        s+=i;
    }
    return s/d;

    //return s/(koniec-pocz); ale w przypadku przedziałów liczb ujemnych może być problem więc lepiej dodać w funkcji przekazywana parametr długości
}


/*
teoretycznie dla przedziałów możemy uzyć po prostu wzoru  dolna granica + górna granica
                                                         -------------------------------
                                                                        2
ale zorientowałem się o tym za późno i popełniłem 
to co popełniłem , raczej działa

*/