/**
    NAL: napiši program, ki od uporabnika sprejme n-števil in jih sešteje.
    Implementiraj funckijo "int get_number_from_user()", ki poskrbi za 
    pridboivanje števil od uporabnika.

    IZPIS:
    Vnesi stevilo: 1
    Vnesi stevilo: 2
    Vnesi stevilo: 1
    Vnesi stevilo: 6
    Vnesi stevilo: 5
    Vsota je: 15
*/

#include <stdio.h>

int get_number_from_user() {
    int stevilo;
    printf("Vnesi stevilo: ");
    scanf("%i", &stevilo);
    return stevilo;
}

int main() {
    int n, sestevek = 0;

    printf("Koliko stevil zelis vnesti? ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        sestevek += get_number_from_user();
    }

    printf("Vsota je: %d\n", sestevek);

    return 0;
}