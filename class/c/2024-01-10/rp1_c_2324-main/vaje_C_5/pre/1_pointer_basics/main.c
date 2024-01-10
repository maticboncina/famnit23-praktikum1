#include <stdio.h>

int main() {
    printf("VARIABLE\t VALUE\n");
    int number = 10;
    printf("number  \t %i\n", number);
    printf("&number \t %p\n", &number);

    int *p_number = &number;
    printf("p_number\t %p\n", p_number);
    printf("*p_number\t %i\n", *p_number);
    // volatile unsigned int* ptr = (volatile unsigned int *)0x7ffe6f2191dc;
}