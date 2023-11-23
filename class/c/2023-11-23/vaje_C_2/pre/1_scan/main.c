#include <stdio.h>

int main() {
    printf("Please enter a number!\n");

    // pripravi prostor za vrednost
    long vnos;
    int drugi_vnos;

    // scanner
    scanf("%li%i", &vnos, &drugi_vnos);
    printf("Vpisal si: %li\n", vnos);
    printf("Vpisal si: %i\n", drugi_vnos);
}
