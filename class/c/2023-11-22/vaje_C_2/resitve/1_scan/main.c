#include <stdio.h>

int main() {
    printf("Please enter a number!\n");

    // pripravi prostor za vrednost
    long vnos;
    int drugi_vnos;

    // scanner
    scanf("%i in %li", &drugi_vnos, &vnos);
    printf("Vpisal si: %li\n", vnos);
    printf("Vpisal si: %i\n", drugi_vnos);
}