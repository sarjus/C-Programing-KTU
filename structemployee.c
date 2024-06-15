/******************************************************
 * File         :   checksymmetricmatrix.c
 * Description  :   Write a program to read and store the details (the name, employee code (integer) and salary)
                    of ‘n’ employees in a company into a file using structure.
                    Print the details of the employee whose employee code is given as input.
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   21/05/2021
 * ***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for employee details
struct Employee {
    char name[100];
    int code;
    float salary;
};

int main() {
    FILE *file;
    int n, empCode;
    struct Employee emp;
    int found = 0;

    // Asking user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Open file for writing
    file = fopen("employees.dat", "w");
    // Read and store employee details
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp.name);
        printf("Employee Code: ");
        scanf("%d", &emp.code);
        printf("Salary: ");
        scanf("%f", &emp.salary);
        fwrite(&emp, sizeof(struct Employee), 1, file);
    }

    // Close the file after writing
    fclose(file);

    // Open file for reading
    file = fopen("employees.dat", "r");

    // Asking user for the employee code to search
    printf("Enter employee code to search: ");
    scanf("%d", &empCode);

    // Read and search for the employee details
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        if (emp.code == empCode) {
            printf("Employee found:\n");
            printf("Name: %s\n", emp.name);
            printf("Employee Code: %d\n", emp.code);
            printf("Salary: %.2f\n", emp.salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with code %d not found.\n", empCode);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
