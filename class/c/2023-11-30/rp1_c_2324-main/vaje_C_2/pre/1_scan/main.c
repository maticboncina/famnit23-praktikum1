#include<stdio.h>

int main(){
    printf("Prosim vnesi števili\n");
    int prvi_vnos;
    long drugi_vnos;

    scanf("%i%li",&prvi_vnos, &drugi_vnos);
    printf("Vpisal si: %i\n", prvi_vnos);
    printf("Vpisal si: %li\n", drugi_vnos);
    return 0;
}