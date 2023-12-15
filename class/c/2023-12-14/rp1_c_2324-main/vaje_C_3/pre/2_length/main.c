#include <stdio.h>
/*
    NAL: Ustvari enodimenzionalno polje, izračunaj velikost celotnega polja, 
    velikost elementa v polju, število elementov. Za izračun uporabi 
    funkcijo sizeof. Za izpis ustvari funkcijo "void print_array(int array[], int length);"

    IZPIS:
    Velikost celotnega polja: 36
    Velikost elementa: 4
    Število elementov: 9
    [ 1 2 3 4 5 6 7 8 9 ]

    Dodatno: Izpis velikosti prenesi v funkcijo "int array_length(int array[])" Kaj ugotoviš?
    
*/
void print_array(int array[], int length);
int array_length(int array[]);

int main(){
    int polje[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vel_polja = sizeof(polje);
    printf("Velikost celotnega polja: %i\n", vel_polja);

    int vel_elementa = sizeof(polje[0]);
    printf("Velikost elementa: %i\n", vel_elementa);

    int st_elementov = vel_polja / vel_elementa;
    printf("Stevilo elementov: %i\n", st_elementov);

    array_length(polje);
    print_array(polje, st_elementov);
    return 0;
}
void print_array(int array[], int length){
  printf("[ ");
  for (int i = 0; i < length; i++)
  {
    printf("%i ", array[i]);
  }
  printf("]\n");
}
int array_length(int polje[]){
    int vel_polja = sizeof(polje);
    printf("Velikost celotnega polja: %i\n", vel_polja);

    int vel_elementa = sizeof(polje[0]);
    printf("Velikost elementa: %i\n", vel_elementa);

    int st_elementov = vel_polja / vel_elementa;
    printf("Stevilo elementov: %i\n", st_elementov); 

    return st_elementov;
}