#include <stdio.h>

int main() {
    int x = 10;   // an integer variable
    int *p;       // a pointer to an integer

    p = &x;       // p now contains the address of x

    printf("The value of x is: %d\n", x);   // prints the value of x
    printf("The address of x is: %p\n", (void*)&x);  // prints the address of x
    printf("The value of *p is: %d\n", *p);  // prints the value at the address stored in p (which is the value of x)

    return 0;
}