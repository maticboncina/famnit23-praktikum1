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

}

// Function to display student information
void displayStudent(struct Student s) {

}

int main() {
    struct Student student1;

    printf("Enter details for student 1:\n");
    // call inputStudent() function

    printf("\nStudent details:\n");
    // call displayStudent() function

    return 0;
}