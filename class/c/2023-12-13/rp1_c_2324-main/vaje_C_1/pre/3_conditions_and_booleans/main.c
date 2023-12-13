#include <stdio.h>
#include <stdbool.h>

int main() {
    if (1) {
        printf("Hello world!\n");
    }

    if (0) {
        printf("Not hello world!\n");
    }

    bool hello_again = true;
    if (hello_again) {
        printf("Hello again...\n");
    }
}