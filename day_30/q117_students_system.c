#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student database[10] = {
        {1, "Aman Kumar", 88.5},
        {2, "Rahul Sharma", 92.0},
        {3, "Sneha Gupta", 79.5}
    };
    int total = 3, choice;

    while (1) {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Display All Records\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Exit\n");
        printf("Choice enter karein: ");
        scanf("%d", &choice);

        if (choice == 3) break;

        switch (choice) {
            case 1:
                printf("\n%-10s %-25s %-10s\n", "Roll No", "Student Name", "Marks");
                printf("---------------------------------------------\n");
                for (int i = 0; i < total; i++) {
                    printf("%-10d %-25s %-10.2f\n", database[i].rollNo, database[i].name, database[i].marks);
                }
                break;
            case 2: {
                int searchRoll, found = 0;
                printf("Search karne ke liye Roll No dalein: ");
                scanf("%d", &searchRoll);
                for (int i = 0; i < total; i++) {
                    if (database[i].rollNo == searchRoll) {
                        printf("\nStudent Found!\nName: %s\nMarks: %.2f\n", database[i].name, database[i].marks);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Record nahi mila!\n");
                break;
            }
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}