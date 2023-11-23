/**
    NAL: napiši program, ki od uporabnika sprejme 2 števili.
    Implementiraj funckijo "max", ki ji podamo te števili, ta pa nam vrne večjo.
    Večje število izpiši.

    IZPIS:
    Vpisi stevilo a: 5
    Vpisi stevilo b: 8
    Vecje stevilo je: 8
*/

#include <stdio.h>
/*
    deklaracija funkcij
*/
int max(int a, int b);

/*
    inicializacija funckij
*/ 
int main() {
    int a;
    int b;
    printf("Vpisi stevilo a: ");
    scanf("%i", &a);
    printf("Vpisi stevilo b: ");
    scanf("%i", &b);
    printf("Vecje stevilo je: %i\n", max(a, b));
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}