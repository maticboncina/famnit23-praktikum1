/* 
Modify the program from previous task. Add support for adding students via 
command line arguments.

IZPIS: ./a.out Nastja 111 21 f Simon 222 22 d Andreja 333 31 a

Displaying details for all students:

Student 1 details:
Student Name: Nastja
Roll Number: 111
Age: 21
Grade: f

Student 2 details:
Student Name: Simon
Roll Number: 222
Age: 22
Grade: d

Student 3 details:
Student Name: Andreja
Roll Number: 333
Age: 31
Grade: a

OPTIONAL TASK 1: Change code so that you are not limited to always provide detials for 3 students1.
OPTIONAL TASK 2: Enable skipping inputs.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STUDENTS 3

// Define the Student structure
struct Students {
    char name[50];
    int roll_number;
    int age;
    char grade;
};

void inputStudentsCmd(struct Students *s, int *size, char *data[]) {
    for (int i = 0; i < *size; i++) {
        strcpy(s -> name, data[i * 4 + 1]);
        s -> roll_number = atoi(data[i * 4 + 2]);
        s -> age = atoi(data[i * 4 + 3]);
        s -> roll_number = data[i * 4 + 4][0];
        s += 1;
    }
    s -= *size;
}

void inputStudents(struct Students *s, int *size) {
    for (int i = 0; i < *size; i++) {
        printf("Enter details for student %i\nEnter student name: ", (i+1));
        scanf("%s", s->name);
        printf("Enter roll number: ");
        scanf("%d", &s->roll_number);
        printf("Enter age: ");
        scanf("%d", &s->age);
        printf("Enter grade: ");
        scanf(" %c", &s->grade);
        s++;
    }
    s -= *size;
}

// Function to display student information
void displayStudents(struct Students *s, int *size) {
    for (int i = 0; i < *size; i++) {
        printf("\nStudent %i details:\nStudent Name: %s\nRoll Number: %d\nAge: %d\nGrade: %c\n", (i+1), s -> name, s -> roll_number, s -> age, s -> grade);
        s++;
    }
    s -= *size;
}

int main(int argc, char* argv[]) {
    int size = (argc - 1) / 4;
    struct Students students[size];
    if (size < MAX_STUDENTS) size = MAX_STUDENTS;
    if(argc > 1) {
        inputStudentsCmd(students, &size, argv);
    }
    else {
        size = MAX_STUDENTS;
        inputStudents(students, &size);
    }

    displayStudents(students, &size);

    printf("\n");
    return 0;
}