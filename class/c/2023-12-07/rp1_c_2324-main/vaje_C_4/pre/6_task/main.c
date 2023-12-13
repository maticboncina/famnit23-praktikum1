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
    Število argumentov: 4
    Dolžina celotnega stringa: 16
    Izpis polja: Radi imamo mleko 
**/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    int count = 0;
    int steviloArgumentov = 0;

    for (int i = 1; i < argc; i++){
        count += strlen(argv[i]);

    }
    // s tem štejemo presledke
    count += argc -2;

    char polje[count];
    polje[0] = '\0';

    for (int i = 1; i < argc; i++){
        strcat(polje, argv[i]);
        if(i == argc - 1){
            break;
        }
            strcat(polje, " ");
    }

    printf("Število argumentov: %i\n", argc);
    printf("Dolžina celotnega stringa: %i\n", count);
    printf("Izpis polja: %s\n", polje);


    return 0;
}
