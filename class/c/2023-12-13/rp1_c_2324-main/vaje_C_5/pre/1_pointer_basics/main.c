#include <stdio.h>

int main() {
    int n = 5;
    int *n_p = &n;

    printf("n: %i\n", n);
    printf("&n: %p\n", &n);
    printf("n_p: %p\n", n_p);
    printf("n_p: %i\n", *n_p);

    return 0;
}