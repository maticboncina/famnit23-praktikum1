#include <stdio.h>

int main() {
    printf("Creating first array...");
    // int numbers = new int[5];
    int numbers[5];
    numbers[0] = 10;
    numbers[1] = 5;
    numbers[2] = 8;
    numbers[3] = 12;
    numbers[4] = 9;
    printf("Done!\n");

    for (int i = 0 ; i < 5 ; i++) {
        printf("\tNumber on index %i: %i\n", i, numbers[i]);
    }

    printf("Creating second array...");
    int other_numbers[] = { 1, 3, 5, 7, 8 };
    printf("Done!\n");

    for (int i = 0 ; i < 5 ; i++) {
        printf("\tNumber on index %i: %i\n", i, other_numbers[i]);
    }

}