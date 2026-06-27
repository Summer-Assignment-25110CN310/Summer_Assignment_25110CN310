#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    char dept[30];
};

int main() {
    int n;
    struct Employee emp[30];

    printf("=== Employee Management System ===\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Department: ");
        scanf(" %[^\n]", emp[i].dept);
    }

    printf("\n======================== EMPLOYEE DIRECTORY ========================\n");
    printf("%-12s %-30s %-20s\n", "Emp ID", "Employee Name", "Department");
    printf("--------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-12d %-30s %-20s\n", emp[i].empId, emp[i].name, emp[i].dept);
    }
    printf("====================================================================\n");

    return 0;
}