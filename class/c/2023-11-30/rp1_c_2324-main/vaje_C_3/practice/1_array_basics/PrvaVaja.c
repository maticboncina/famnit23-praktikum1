//
// Created by Matic Boncina on 30/11/2023.
//

#include <stdio.h>

int main() {
    printf("Creating first array...");
    // int numbers = new int[5];
    int numbers[5];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 4;
    numbers[3] = 10;
    numbers[4] = 11;

    for (int i = 0 ; i < 5 ; i++) {
        printf("\tNumber on index %i: %i\n", i, numbers[i]);
    }

    printf("Drugi nacin..");
    int other_numbers[] = { 1, 2, 4, 10, 11};
    printf("Done!\n");

    for (int i = 0 ; i < 5 ; i++) {
        printf("\tNumber on index %i: %i\n", i, other_numbers[i]);
    }

}