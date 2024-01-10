#include <stdio.h>
#include <string.h>

struct Address{
    int streetNumber;
    char city[50];

};

struct Employee{
    char name[50];
    int employeeId;
    struct Address employeeAddress;    
};


int main(){
    struct Employee emp1;
    strcpy(emp1.name, "Ana");
    emp1.employeeId = 100;
    emp1.employeeAddress.streetNumber = 5;
    strcpy(emp1.employeeAddress.city, "Ljubljana");

    printf("Employee name: %s\n", emp1.name);
    printf("Employee ID: %i\n", emp1.employeeId);
    printf("Employee city: %s\n", emp1.employeeAddress.city);
    printf("Employee street number: %i\n", emp1.employeeAddress.streetNumber);

    return 0;
}