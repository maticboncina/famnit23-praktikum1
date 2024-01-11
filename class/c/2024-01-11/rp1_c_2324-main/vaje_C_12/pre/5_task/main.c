/**
 * Napiši program, ki za vas hrani datume (recimo rojstne dneve).
 * Program naj ima dva polja (arraya). V enem hrani datume in v drugem 
 * besedo, ki jo uporabnik lahko pripiše temu datumu.
 * Program naj uporabnika najprej vpraša ali bi rad vpisal nov datum, ali
 * bi rad pregled datumov.
 * 
 * IZBOLJSAVE:
 * - več besed v note
 * - memorizacija (pisanje/branje datotek)
 * - sortiran izpis
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX_DATES = 100;

int main() {
    char notes[MAX_DATES][256];
    int date[MAX_DATES][3]; // date array has three element in each entry representing day, month, year
    int date_count = 0;
    int user_choice;

    while (1) {

        printf("Enter 1 to add a new date\n");
        printf("Enter 2 to view stored dates\n");
        printf("Enter any other number to exit\n");
        scanf("%d", &user_choice);

        if (user_choice == 1) {
            printf("Enter the date in the format YYYY-MM-DD: ");
            scanf("%i.%i.%i", &date[date_count][0], &date[date_count][1], &date[date_count][2]);
            fflush(stdin);
            printf("Enter a note for this date: ");
            scanf(" %s", notes[date_count]);
            printf("Success!\n%s\n", notes[date_count]);
            date_count++;
        } else if (user_choice == 2) {
            printf("\n\n******* LIST *******\n");
            for (int i = 0; i < date_count; i++) {
                printf("%d.%d.%d: %s\n", date[i][0], date[i][1], date[i][2], notes[i]);
            }
            printf("******* END *******\n\n");
        } else {
            break;
        }
    }
    return 0;
}
