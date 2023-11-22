#include <stdio.h>
/*
    DEKLARACIJA FUNKCIJ
*/
int get_number_from_user();
/*
    INICIALIZACIJA FUNKCIJ
*/
int main() {
    
    int number_of_requests = 5;
    int sum = 0;

    for (int i = 0 ; i < number_of_requests ; i++) {
        sum = sum + get_number_from_user();
    }
    
    printf("Vsota je: %i\n", sum);
}

int get_number_from_user() {
    int input;
    printf("Vnesi stevilo: ");
    scanf("%i", &input);
    return input;
}