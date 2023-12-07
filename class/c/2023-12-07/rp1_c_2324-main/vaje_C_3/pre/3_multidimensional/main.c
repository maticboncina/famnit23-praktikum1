/*
    NAL: Ustvari večdimenzionalni niz in vanj shrani koordinate n-točk. 
    Točke imajo koordinati x in y. Koordinate shrani z uporabo večdimenzionalnih polj. 
    Za izpis napiši funkcijo "print_points", ki sprejme polje točk in število
    točk.

    IZPIS: n = 3;
    Tocka 1: (1, 1)
    Tocka 2: (3, 5)
    Tocka 3: (3, 2)

    DODATNO: Razširi delovanje na 3D. 
*/

#include<stdio.h>
#define n 3
void print_points(int a[][3], int len);
int main(){
    int points[n][3] = {1, 1, 0, 3, 5, 0, 3, 2, 0};
    print_points(points, n);
    return 0;
}

void print_points(int a[][3], int len){
    for (int i = 0; i < len; i++)
    {
        printf("Tocka %i: (%i, %i, %i)\n", i, a[i][0], a[i][1], a[i][2]);
    }
}