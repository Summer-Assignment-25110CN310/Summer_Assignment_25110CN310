#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    int n;
    struct Contact directory[20];

    printf("=== Contact Management System ===\n");
    printf("Kitne contacts save karne hain? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Contact %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", directory[i].name);
        printf("Phone Number: ");
        scanf("%s", directory[i].phone);
        printf("Email Address: ");
        scanf("%s", directory[i].email);
    }

    printf("\n=========================== PHONE DIRECTORY ===========================\n");
    printf("%-25s %-15s %-30s\n", "Contact Name", "Phone", "Email Address");
    printf("-----------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-25s %-15s %-30s\n", directory[i].name, directory[i].phone, directory[i].email);
    }
    printf("=======================================================================\n");

    return 0;
}