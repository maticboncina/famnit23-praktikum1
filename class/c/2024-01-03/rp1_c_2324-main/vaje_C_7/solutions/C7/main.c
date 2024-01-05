/**
    NAL: Napiši program "To-Do List", ki go omogočal shranjevanje nalog, ki jih 
    morate opraviti. Program mora omogočati:
    => nalaganje nalog iz datoteke "load_tasks"
    => shranjevanje nalog v datoteko tasks.txt "save_task"
    => printanje nalog "print_task"
    => odstranjevanje naloge "remove_task"
    => ispis menija "main_menu"
    => DODATNA NALOGA: implementiraj dodajanje nalog preko argumentov v 
       ukazni vrstici "add_task"


    Za boljše razumevanje naloge lahko preizkusiš delovanje programa ./todo.out

    V nadaljevanju je predstavljena osnovna struktura, ki vam bo v pomoč. 
    Vaša naloga je dokončati zastavljene funkcije in dodati manjkajoče.

    IZPIS: $  ./todo.out
    To-Do List:
    0: Learn Git
    1: Learn C
    2: Make HW

    Write "<index>" to remove a task. Or "-1" to exit.
    0

    To-Do List:
    0: Learn C
    1: Make HW

    IZPIS (DODATNA NALOGA): ./todo.out "Learn pointers"
    To-Do List:
    0: Learn C
    1: Make HW
    2: Learn pointers

    Write "<index>" to remove a task. Or "-1" to exit.

    NAPREDNA NALOGA: 
    Implementiraj nalogo tako, da število nalog ne bo omejeno. 
    
    Namig: Use a (dynamically allocated) array of pointers to (dynamically allocated) arrays. 
    This is used mostly when the array bounds are not known until runtime.
    https://stackoverflow.com/questions/3911400/how-to-pass-2d-array-matrix-in-a-function-in-c 
    
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 500
#define MAX_TASKS 30

void main_menu(char tasks[][MAX_STRING_LENGTH], int* size);
void print_tasks(char tasks[][MAX_STRING_LENGTH], int* size);
void load_tasks(char tasks[][MAX_STRING_LENGTH], int* size) ;
void save_tasks(char tasks[][MAX_STRING_LENGTH], int* size);
void remove_task(char tasks[][MAX_STRING_LENGTH], int* size, int index_to_remove);
void add_task(char tasks[][MAX_STRING_LENGTH], int* size, char* task);

int main(int argc, char* argv[]) {
    // init varables
    char tasks[MAX_TASKS][MAX_STRING_LENGTH];
    int size;

    // Load_tasks from file)
    load_tasks(tasks, &size);
    // Check if command line arguments added
        // If yes: add string to tasks and save to file
    if (argc == 2){
        //printf("%s", argv[1]);
        add_task(tasks, &size, argv[1]);
        save_tasks(tasks, &size);
    }
    // Print menu
    main_menu(tasks, &size);
}

void main_menu(char tasks[][MAX_STRING_LENGTH], int* size) {
    // Print saved tasks
    printf("\nTo-Do List:\n");
    for (int i = 0; i < *size; i++){
        printf("%i: %s", i, tasks[i]);
    }
    // Print menu options
    printf(" Write \"<index>\" to remove a task. Or \"-1\" to exit.\n");
    int selected_index;
    scanf("%d", &selected_index);
    // Appropriately react to user input
    if (selected_index != -1){
        printf("Remove element: %d\n", selected_index);
        remove_task(tasks, size, selected_index);
        save_tasks(tasks, size);
        main_menu(tasks, size);
    }

}

void print_tasks(char tasks[][MAX_STRING_LENGTH], int* size) {
    //loop though the tasks and print all elements as strings
}

void save_tasks(char tasks[][MAX_STRING_LENGTH], int* size) {
    // open file
    FILE* file = fopen("tasks.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing!\n");
        return;
    }
    // Write each task as a separate line into file
    // You write one line with fprintf(file, "%s", "string to write");
    for (int i = 0; i < *size; i++){
        fprintf(file, "%s", tasks[i]);
    }
    fclose(file);
}

void load_tasks(char tasks[][MAX_STRING_LENGTH], int* size) {
    FILE* file = fopen("tasks.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading!\n");
        return;
    }
    // Create char array of size MAX_STRING_LENGTH
    char line[MAX_STRING_LENGTH];
    // For each read line in file copy line to appropriate tasks index and increase size
    // Line is read by fgets(line, sizeof(line), file)
    *size = 0;
    while (fgets(line, sizeof(line), file) != NULL){
        strcpy(tasks[*size], line);
        *size += 1;
    }
        
    fclose(file);
}

void remove_task(char tasks[][MAX_STRING_LENGTH], int* size, int index_to_remove) {
    // Exit if invalid index was proposed
    if (index_to_remove >= *size){
        return;
    }
    // Shift the elements after the element to be removed one position to the left
    for (int i = index_to_remove; i < *size; i++){
        strcpy(tasks[i], tasks[i + 1]);
    }
    // Decrement the size of the array
    *size -= 1;
}

//DODATNA NALOGA
void add_task(char tasks[][MAX_STRING_LENGTH], int* size, char* task) {
    // Check if we can add to the list and exit if limit MAX_TASKS reached
    if (*size >= MAX_TASKS){
        return;
    }
    // Append "\n" to task to make tasks.txt more readable
    strcat(task, "\n");
    // Copy task to tasks 
    strcpy(tasks[*size], task);
    // Increase the size of tasks
    *size += 1;
}