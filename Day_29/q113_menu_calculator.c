#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("\n=== MENU-DRIVEN CALCULATOR ===\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Apni choice enter karein (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Calculator se exit ho rahe hain. See you!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Do numbers enter karein: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case 2:
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case 3:
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %.2lf\n", num1 / num2);
                } else {
                    printf("Error: Zero se divide nahi kiya ja sakta!\n");
                }
                break;
            default:
                printf("Invalid choice! Kripya sahi option chunein.\n");
        }
    }
    return 0;
}