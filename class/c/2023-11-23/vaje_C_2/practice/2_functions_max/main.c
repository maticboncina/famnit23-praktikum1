//
// Created by Matic Boncina on 23/11/2023.
//
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
int max(int a, int b);

int main() {
    int prvi_vnos;
    int drugi_vnos;

    printf("Vpisi stevilo a:");
    scanf("%i",&prvi_vnos);

    printf("Vpisi stevilo b:");
    scanf("%i",&drugi_vnos);

    printf("Vecje stevilo je: %i\n", max(prvi_vnos, drugi_vnos));
}

int max(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
