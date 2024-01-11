/* Modify the program from previous task to support adding multiple sutdents.
For example enable adding 3 students.

Modify the code below to achive this goal.

IZPIS: ./a.out

Enter details for 3 students:
Enter details for student 1:
Enter student name: Nastja
Enter roll number: 111
Enter age: 21
Enter grade: f
Enter details for student 2:
Enter student name: Simon
Enter roll number: 222
Enter age: 22
Enter grade: d
Enter details for student 3:
Enter student name: Andreja
Enter roll number: 333
Enter age: 31
Enter grade: a

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

*/

#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_number;
    int age;
    char grade;
};

// Function to input data for a student
void inputStudent(struct Student *s) {
    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll_number);
    printf("Enter age: ");
    scanf("%d", &s->age);
    printf("Enter grade: ");
    scanf(" %c", &s->grade);
}

// Function to display student information
void displayStudent(struct Student s) {
    printf("\nStudent Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Age: %d\n", s.age);
    printf("Grade: %c\n", s.grade);
}

int main() {
    struct Student student1;

    printf("Enter details for student 1:\n");
    inputStudent(&student1);

    printf("\nStudent details:\n");
    displayStudent(student1);

    return 0;
}