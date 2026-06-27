#include <stdio.h>

struct Salary {
    char name[50];
    float basic;
    float hra;  // House Rent Allowance
    float da;   // Dearness Allowance
    float netSalary;
};

int main() {
    int n;
    struct Salary emp[20];

    printf("=== Salary Management System ===\n");
    printf("Kitne employees ki payroll generate karni hai? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Basic Salary (INR): ");
        scanf("%f", &emp[i].basic);

        // HRA 20% aur DA 10% auto-calculate ho raha hai payroll logic se
        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.10;
        emp[i].netSalary = emp[i].basic + emp[i].hra + emp[i].da;
    }

    printf("\n=================================== PAYROLL REPORT ===================================\n");
    printf("%-25s %-15s %-12s %-12s %-15s\n", "Employee Name", "Basic Pay", "HRA (20%)", "DA (10%)", "Net Salary");
    printf("--------------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-25s %-15.2f %-12.2f %-12.2f %-15.2f\n", 
               emp[i].name, emp[i].basic, emp[i].hra, emp[i].da, emp[i].netSalary);
    }
    printf("======================================================================================\n");

    return 0;
}