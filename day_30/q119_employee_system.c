#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee empList[5] = {
        {101, "Gautam", 75000.00},
        {102, "Vikram", 62000.00}
    };
    int count = 2, choice;

    while (1) {
        printf("\n=== MINI EMPLOYEE MANAGEMENT SYSTEM ===\n");
        printf("1. View Employee Roster\n");
        printf("2. Give Appraisal Increment (10%%)\n");
        printf("3. Exit\n");
        printf("Select option: ");
        scanf("%d", &choice);

        if (choice == 3) break;

        switch (choice) {
            case 1:
                printf("\n%-6s %-25s %-15s\n", "ID", "Employee Name", "Salary (INR)");
                printf("--------------------------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%-6d %-25s %-15.2f\n", empList[i].id, empList[i].name, empList[i].salary);
                }
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    empList[i].salary += (empList[i].salary * 0.10); // 10% structural increment
                }
                printf("Success: Sabhi employees ki salary 10%% badha di gayi hai!\n");
                break;
            default:
                printf("Galat vikalp!\n");
        }
    }
    return 0;
}