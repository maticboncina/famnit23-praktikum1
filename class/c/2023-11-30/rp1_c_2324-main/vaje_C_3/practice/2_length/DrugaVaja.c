/*
    NAL: Ustvari enodimenzionalno polje, izračunaj celikost celotnega polja, 
    velikost elementa v polju, število elementov. Za izračun uporabi 
    funkcijo sizeof. Za izpis ustvari funkcijo "void print_array(int array[], int length);"

    IZPIS:
    Velikost celotnega polja: 36
    Velikost elementa: 4
    Število elementov: 9
    [ 1 2 3 4 5 6 7 8 9 ]

    Dodatno: Izpis velikosti prenesi v funkcijo "int array_length(int array[])" Kaj ugotoviš?
    
*/

#include <stdio.h>

void printArray(int array[], int length);

int main() {
    int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int velikostCelotnegaPolja = sizeof(numbers);
    printf("Velikost polja: %i\n", velikostCelotnegaPolja);

    int velikostElementa = sizeof(numbers[0]);
    printf("Velikost elementa: %i\n", velikostElementa);

    int stElementov = velikostCelotnegaPolja / velikostElementa;
    printf("Število elementov: %i\n", stElementov);

    printArray(numbers, stElementov);

    return 0;
}

void printArray(int array[], int length) {
    printf("[ ");
    
    for (int i = 0; i < length; i++) {
        printf("%i ", array[i]);
    }
    printf("]\n");
}
