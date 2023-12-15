/*
Napišite program v jeziku C, ki izvaja naslednje naloge:

    Deklarirajte polje celih števil in ga inicializirajte.
    Napišite funkcijo, ki kot argumenta vzame polje in njegovo velikost ter pomnoži vsako 
    z 2. Uporabite kazalce. 


    Napišite drugo funkcijo, ki sprejme polje in njeno velikost kot argumenta 
    ter izpiše elemente polja v obratnem vrstnem redu z uporabo kazalnikov.

IZPIS: 
Original Array: 3 6 9 12 15 
Array after multiplying by 2: 6 12 18 24 30 
Array in reverse order: 30 24 18 12 6 
*/

#include <stdio.h>

void multiplyByTwo(int *arr, int size);
void printArray(int *arr, int size);
void printReverse(int *arr, int size);

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    printf("\n");

    multiplyByTwo(arr, size);
    printf("\n");

    printReverse(arr, size);

    return 0;
}

void printArray(int *arr, int size){
    int *pointer = arr;
    printf("Original Array: ");

    for (int i = 0; i < size; i++) {
        printf("%d", *pointer);
        pointer++;
    }
}

void multiplyByTwo(int *arr, int size){
    int *pointer = arr;
    printf("Array after multiplying by 2: ");

    for (int i = 0; i < size; i++) {
        *pointer = *pointer * 2;
        printf("%d", *pointer);
        pointer++;
    }
}

void printReverse(int *arr, int size) {
    int *pointer = arr + size - 1;
    printf("Array in reverse order: ");

    for (int i = size; i > 0; i--) {
        printf("%d ", *pointer);
        pointer--;
    }
}