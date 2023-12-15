/**
    NAL: Od uporabnika sprejmi 5 števil in jih shrani v polje. Ko uporabnik vpiše vseh 5 števil,
    naj program izpiše polje uporabniku v nasprotnem vrstnem redu. V programu implementiraj funkcijo 
    "void print_reverse(int numbers[], int len)", ki prejme polje števil in njegovo dolžino, ter ne 
    vrača ničesar, temveč izpiše števila kot prikazano spodaj.

    IZPIS: 
    Vpiši število: 6
    Vpiši število: 1
    Vpiši število: 3
    Vpiši število: 20
    Vpiši število: 8
    [ 8 20 3 1 6 ]
*/


#include <stdio.h>

int get_input();
int max(int numbers[], int len);
void print_reverse(int numbers[], int len);

int main(){
    int n = 5;
    int polje[n];
    for (int i = 0; i < n; i++)
    {
        polje[i] = get_input();
    }
    //printf("Največje število: %i\n", max(polje, n));
    print_reverse(polje, n);
    return 0;
}
void print_reverse(int numbers[], int len){
    printf("[ ");
    for(int i = len-1; i >= 0; i--){
        printf("%i ", numbers[i]);
    }
    printf("]\n");
}

int get_input(){
    int n;
    printf("Vpiši število: ");
    scanf("%i", &n);
    return n;
}

