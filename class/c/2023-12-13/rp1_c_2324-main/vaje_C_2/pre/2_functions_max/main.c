/**
    NAL: napiši program, ki od uporabnika sprejme 2 števili.
    Implementiraj funckijo "max", ki ji podamo te števili, ta pa nam vrne večjo.
    Večje število izpiši.

    IZPIS:
    Vpisi stevilo a: 5
    Vpisi stevilo b: 8
    Vecje stevilo je: 8
*/

#include<stdio.h>
int max(int a, int b);

int main(){
    int a, b;
    printf("Vpiši stevilo a:");
    scanf("%i",&a);
    printf("Vpiši stevilo b:");
    scanf("%i",&b);
    
    printf("Vecje stevil je: %i\n", max(a, b));    
    return 0;
}

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}