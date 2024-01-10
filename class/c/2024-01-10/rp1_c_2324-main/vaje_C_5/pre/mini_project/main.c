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

void multiplyByTwo(int *arr, int size) {
    // Multiply each element of the array by 2 using pointers
    for (int i = 0; i < size; i++) 
        *(arr+i) = 2 * *(arr+i);
}

void printReverse(int *arr, int size) {
    // Print the elements of the array in reverse order using pointers
    for (int i = 0; i < size; i++) 
        printf("%i ", *(arr+size-i-1));
    printf("\n");    
}

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call function to multiply each element by 2
    multiplyByTwo(arr, size);

    printf("Array after multiplying by 2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call function to print array elements in reverse
    printf("Array in reverse order: ");
    printReverse(arr, size);

    return 0;
}