#include <stdio.h>

int main() {
    char name[20];
    
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);
    

    printf("Enter name in fgets: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: %s", name);
}