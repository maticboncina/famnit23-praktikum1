/**
    NAL: Od uporabnika sprejmi n-števil in jih shrani v polje. Ko uporabnik vpiše vsa števila,
    naj program poišče največje število in ga izpiše. V programu implementiraj funkcijo 
    "int max(int numbers[], int len)", ki prejme polje števil in njegovo dolžino, ter vrne največje 
    število.

    IZPIS: n = 5
    Vpiši število: 6
    Vpiši število: 1
    Vpiši število: 3
    Vpiši število: 20
    Vpiši število: 8
    Največje število: 20

    DODATNO: Omogočo da uproabnik sam poda število števil, ki jih želi vnesti. 
*/

#include <stdio.h>

int get_input();
int max(int numbers[], int len);

int main(){
    int n = 5;
    int polje[n];
    for (int i = 0; i < n; i++)
    {
        polje[i] = get_input();
    }
    printf("Največje število: %i\n", max(polje, n));

    return 0;
}

int max(int numbers[], int len){
    int max = numbers[0];
    for (int i = 0; i < len; i++)
    {
        if(max < numbers[i])
            max = numbers[i];
    }
    return max;
}

int get_input(){
    int n;
    printf("Vpiši število: ");
    scanf("%i", &n);
    return n;
}

