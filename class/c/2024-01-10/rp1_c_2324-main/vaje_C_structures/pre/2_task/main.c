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

// Define the Student structure
struct Student {
    char name[50];
    int roll_number;
    int age;
    char grade;
};

// Function to input data for a student
void inputStudent(struct Student *s) {
    printf("Enter details for student 1: \n");
    printf("Enter student name: \n");
    scanf("%s", s->name);
    printf("Enter roll number: \n");
    scanf("%i", &s->roll_number);
    printf("Enter age: \n");
    scanf("%i", &s->age);
    printf("Enter grade: \n");
    scanf(" %c", &s->grade); // s presledkom spraznimo buffer
}

// Function to display student information
void displayStudent(struct Student s) {
    printf("Student details: \n\n");
    printf("Student name: %s\n", s.name);
    printf("Roll number: %i\n", s.roll_number);
    printf("Age: %i\n", s.age);
    printf("Age: %c\n", s.grade);

}

int main() {
    struct Student student1;
    inputStudent(&student1);
    displayStudent(student1);
    return 0;
}