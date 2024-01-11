/**
    NAL: napiši program, ki od uporabnika sprejme n-števil in jih sešteje.
    Implementiraj funckijo "int get_number_from_user()", ki poskrbi za 
    pridboivanje števil od uporabnika.

    IZPIS za n=5:
    Vnesi stevilo: 1
    Vnesi stevilo: 2
    Vnesi stevilo: 1
    Vnesi stevilo: 6
    Vnesi stevilo: 5
    Vsota je: 15

    IZPIS za n=2:
    Vnesi stevilo: 1
    Vnesi stevilo: 10
    Vsota je: 11
*/

#include <stdio.h>
/* DEKLARACIJA FUNKCIJ */
int get_number_from_user();

/* INICIALIZACIJA FUNKCIJ */
int main() {
    int n = 5;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=get_number_from_user();
    }
    
    printf("Vsota stevil je: %i\n", sum);
    return 0;
}

int get_number_from_user() {
    int stevilo;
    printf("Vpisi število: ");
    scanf("%i", &stevilo);
   return stevilo;
}