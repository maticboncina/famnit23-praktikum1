#include <stdio.h>

int* max(int* num1, int* num2);

int main() {
    int num1 = 5;
    int num2 = 8;

    printf("[main] num1: %i\n", num1);
    printf("[main] num2: %i\n", num2);

    //call max
    int* bigger = max(&num1, &num2);

    printf("[main] bigger: %p\n", bigger);
    printf("[main] *bigger: %i\n", *bigger);
    
    printf("[main] CHANGE IN num2!\n");
    num2 = 3;

    bigger = max(&num1, &num2);
    printf("[main] bigger: %p\n", bigger);
    printf("[main] *bigger: %i\n", *bigger);
    
}

int* max(int* num1, int* num2) {
    printf("[max] num1 (pointer): %p\n", num1);
    printf("[max] num2 (pointer): %p\n", num2);
    printf("[max] *num1 (value of pointer): %i\n", *num1);
    printf("[max] *num2 (value of pointer): %i\n", *num2);
    if (*num1 > *num2) {
        return num1;
    } else {
        return num2;
    }
}
