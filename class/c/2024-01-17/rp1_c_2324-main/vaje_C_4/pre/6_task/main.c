/**
NAL: Napiši program, ki bo prejel poljubno število argumentov preko ukazne vrstice 
in jih združila v enodimenzionalno polje kot string. Za kopiranje in dodajanje uporabi 
strcpy() in strcat() funkciji. Dolžino stringa ugotovi s funkcijo strlen(). Obe funkciji
sta definirani v knjižnici string.h

    IZPIS: ./a.out Danes je lepo vreme
    Število argumentov: 5
    Dolžina celotnega stringa: 19
    argv Danes je lepo vreme 

    IZPIS: ./a.out Radi imamo mleko
    Število argumentov: 3
    Dolžina celotnega stringa: 16
    Izpis polja: Radi imamo mleko 
**/

#include<string.h>
#include<stdio.h>

int main(int argc, char *argv[]) {
    printf("Število argumentov: %i\n", argc);
    int total_len=0;
    for(int i=1; i<argc; i++) total_len += strlen(argv[i]);
    printf("Dolžina celotnega stringa: %i\n", total_len+argc-2);

    char polje[total_len+argc-2];
    strcpy(polje, argv[1]);
    for(int i=2; i<argc; i++){
        strcat(polje, " "); 
        strcat(polje, argv[i]);
        //sprintf(polje, "%s %s", polje, argv[i]);
    } 
    printf("Izpis polja: %s\n", polje);

    return 0;
}