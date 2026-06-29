#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];
    int choice;

    printf("=== STRING OPERATIONS DASHBOARD ===\n");
    printf("Pehle main string (Str1) enter karein: ");
    scanf(" %[^\n]", str1);

    while (1) {
        printf("\nCurrent String: \"%s\"\n", str1);
        printf("1. Find String Length\n");
        printf("2. Concatenate Another String\n");
        printf("3. Reverse the String\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        switch (choice) {
            case 1:
                printf("Length of string: %lu\n", strlen(str1));
                break;
            case 2:
                printf("Dusri string enter karein jise jodna hai: ");
                scanf(" %[^\n]", str2);
                strcat(str1, str2);
                printf("Updated String: \"%s\"\n", str1);
                break;
            case 3:
                printf("Reversed String: ");
                for (int i = strlen(str1) - 1; i >= 0; i--) {
                    putchar(str1[i]);
                }
                printf("\n");
                break;
            default:
                printf("Invalid input options!\n");
        }
    }
    return 0;
}