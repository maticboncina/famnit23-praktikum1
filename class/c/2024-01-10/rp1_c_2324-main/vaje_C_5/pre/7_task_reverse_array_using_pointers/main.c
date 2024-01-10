/*
Write a C program that reverses the elements of an array using pointers. Follow these steps:

    1. Declare an array of integers and initialize it with some values.
    2. Write a function that takes the array and its size as arguments and reverses the 
    elements of the array using pointers.
    3. Display the original array and the reversed array to verify your code.

    Bellow is a basic structure to guide you. 

    Your task is to complete the reverseArray function. Inside this function, use pointers to 
    reverse the elements of the array in place!

    IZPIS: 
    Original Array: 1 2 3 4 5 6 7 8 9 10 
    Reversed Array: 10 9 8 7 6 5 4 3 2 1 
*/

#include <stdio.h>

void reverseArray(int *arr, int size) {
    // Logic to reverse the array using pointers
    // Hint: Use pointers to the start and end of the array, swapping elements until they meet.
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to reverse the array
    reverseArray(arr, size);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}