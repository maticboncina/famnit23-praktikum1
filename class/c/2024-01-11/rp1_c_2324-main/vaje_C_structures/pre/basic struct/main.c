/*
IZPIS: ./a.out 
Employee Name: Alice
Employee ID: 101
Street Number: 10
City: New York
*/

#include <stdio.h>
#include <string.h>

// Define a nested structure
struct Address {
    int street_num;
    char city[50];
};

struct Employee {
    char name[50];
    int emp_id;
    struct Address emp_address;
};

int main() {
    // Declare a variable of type struct Employee
    struct Employee emp1;

    // Accessing and assigning values to nested structure members
    emp1.emp_id = 101;
    strcpy(emp1.name, "Alice");
    emp1.emp_address.street_num = 10;
    strcpy(emp1.emp_address.city, "New York");

    // Accessing and printing nested structure members
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee ID: %d\n", emp1.emp_id);
    printf("Street Number: %d\n", emp1.emp_address.street_num);
    printf("City: %s\n", emp1.emp_address.city);

    return 0;
}