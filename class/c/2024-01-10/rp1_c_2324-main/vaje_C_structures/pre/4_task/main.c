
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

Modify the program from previous task to support adding multiple sutdents.
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
#include <string.h>
#include <stdlib.h>

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

void inputStudentCMD(struct Student *s, char* argv[]) {
	strcpy(s->name, argv[0]);
	s->roll_number = atoi(argv[1]);
	s->age = atoi(argv[2]);
	s->grade = argv[3][0];
}

// Function to display student information
void displayStudent(struct Student s) {
    printf("\nStudent Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Age: %d\n", s.age);
    printf("Grade: %c\n", s.grade);
}

int main(int args, char* argv[]) {
	int size = (args-1)/4;
	if (args != 1)
	{
		size = 3;
	}
	struct Student students[size];
	
	if (args != 1)
	{
		for (int i = 0; i < size; i++)
		{
			inputStudentCMD(&students[i], argv+1+4*i);
		}

		for (int i = 0; i < size; i++)
    	{
        	printf("\nStudent %i details:\n", 1+i);
        	displayStudent(students[i]);
    	}
	}
	else
	{
		for (int i = 0; i < size; i++)
    	{
        	printf("Enter details for student %i:\n", i+1);
        	inputStudent(&students[i]);
    	}
    
    	for (int i = 0; i < size; i++)
    	{
        	printf("\nStudent %i details:\n", 1+i);
        	displayStudent(students[i]);
    	}
	}
	
    return 0;
}