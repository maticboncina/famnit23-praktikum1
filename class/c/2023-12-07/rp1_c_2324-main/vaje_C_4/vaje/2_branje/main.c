#include <stdio.h>

int main(){

    char ime[20];
    //scanf("%s", ime);
    printf("Tvoje ime je: %s", ime);

    fgets(ime, sizeof(ime), stdin);
    return 0;
}