/*Create a program to manage student records using a structure named Student. 
Each student should have the following information: name, roll number, age, and grade.

The strucure of the program is provided in order to help you out. Finish the missing parts
in appropriate manner.

IZPIS: ./a.out 

Enter details for student 1:
Enter student name: Nastja
Enter roll number: 2222
Enter age: 21
Enter grade: female

Student details: 

Student Name: Nastja
Roll Number: 2222
Age: 21
Grade: f

**/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENT 3

// Define the Student structure
struct Student {
    char name[50];
    int roll_number;
    int age;
    char grade;
};

// Function to input data for a student
void inputStudents(struct Student *s, int size) {
    for (int i = 0; i < size; i++){
        printf("Enter details for student %i: \n", i+1);
        printf("Enter student name: \n");
        scanf("%s", s->name);
        printf("Enter roll number: \n");
        scanf("%i", &s->roll_number);
        printf("Enter age: \n");
        scanf("%i", &s->age);
        printf("Enter grade: \n");
        scanf(" %c", &s->grade); // s presledkom spraznimo buffer

        s += 1;
    }
}

// Function to display student information
void displayStudents(struct Student s, int size) {
    printf("Student details: \n\n");
    printf("Student name: %s\n", s.name);
    printf("Roll number: %i\n", s.roll_number);
    printf("Age: %i\n", s.age);
    printf("Age: %c\n", s.grade);

}

int main() {
    struct Student student1;

    printf("Enter details for students 1: \n");
    inputStudents(&student1, MAX_STUDENT);
    displayStudents(student1, MAX_STUDENT);
    return 0;
}