/*
Write a C program that performs the following tasks:

    Declare an array of integers and initialize it with some values.
    Write a function that takes the array and its size as arguments and multiplies each 
    element of the array by 2 using pointers. Write another function that takes the array 
    and its size as arguments and prints the elements of the array in reverse order using pointers.

Below is a basic structure to guide you.

Your task is to complete the multiplyByTwo function, which multiplies each element of the 
array by 2 using pointers, and the printReverse function, which prints the elements of the
array in reverse order using pointers. 

IZPIS: 
Original Array: 3 6 9 12 15 
Array after multiplying by 2: 6 12 18 24 30 
Array in reverse order: 30 24 18 12 6 
*/

#include <stdio.h>

void multiplyByTwo(int *arr, int size) {
    // Multiply each element of the array by 2 using pointers
}

void printReverse(int *arr, int size) {
    // Print the elements of the array in reverse order using pointers
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