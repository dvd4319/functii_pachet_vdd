#include <stdio.h>
#include "functii.h"


int main(){
    double a,b, rezultat_suma, rezultat_produsul; 

    a = 2; b = 3; 

    rezultat_suma = suma(a,b);
    rezultat_produsul = produsul(a,b);


    printf("rezultat suma = %lf\n", rezultat_suma);
    printf("rezultat produsul = %lf\n", rezultat_produsul);
    return 0; 
}