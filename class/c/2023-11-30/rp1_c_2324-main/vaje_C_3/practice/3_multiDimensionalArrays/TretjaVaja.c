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

#include <stdio.h>

void print_points(int points[][2], int len);

int main(){

    const int n = 3;
    int points[n][2] = {1,1,3,5,3,2};
    int len = sizeof(points)/8;
    print_points(points, len);
    return 0;
}

void print_points(int points[][2], int len){
    for (int i = 0; i < len; i++){
        printf("Tocka %i: (%i, %i)\n", i+1, points[i][0], points[i][1]);
    }

}