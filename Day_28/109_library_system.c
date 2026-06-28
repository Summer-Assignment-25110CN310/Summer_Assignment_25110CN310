#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
    int isIssued; // 0 = Available, 1 = Issued
};

int main() {
    struct Book library[10] = {
        {101, "Let Us C", "Yashavant Kanetkar", 0},
        {102, "Programming in ANSI C", "E. Balagurusamy", 0},
        {103, "The C Programming Language", "Dennis Ritchie", 1}
    };
    int totalBooks = 3, choice, id;

    while(1) {
        printf("\n=== Library Management System ===\n");
        printf("1. View All Books\n");
        printf("2. Issue a Book\n");
        printf("3. Return a Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        switch(choice) {
            case 1:
                printf("\n%-10s %-25s %-20s %-10s\n", "Book ID", "Title", "Author", "Status");
                printf("----------------------------------------------------------------------\n");
                for (int i = 0; i < totalBooks; i++) {
                    printf("%-10d %-25s %-20s %s\n", library[i].bookId, library[i].title, 
                           library[i].author, library[i].isIssued ? "Issued" : "Available");
                }
                break;
            case 2:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);
                int found = 0;
                for (int i = 0; i < totalBooks; i++) {
                    if (library[i].bookId == id) {
                        found = 1;
                        if (library[i].isIssued == 0) {
                            library[i].isIssued = 1;
                            printf("Success: Book '%s' has been issued.\n", library[i].title);
                        } else {
                            printf("Error: Book is already issued to someone else.\n");
                        }
                        break;
                    }
                }
                if (!found) printf("Error: Book ID not found.\n");
                break;
            case 3:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);
                found = 0;
                for (int i = 0; i < totalBooks; i++) {
                    if (library[i].bookId == id) {
                        found = 1;
                        if (library[i].isIssued == 1) {
                            library[i].isIssued = 0;
                            printf("Success: Book '%s' returned safely.\n", library[i].title);
                        } else {
                            printf("Notice: Book was not issued. It's already in library.\n");
                        }
                        break;
                    }
                }
                if (!found) printf("Error: Book ID not found.\n");
                break;
            default:
                printf("Invalid selection!\n");
        }
    }
    return 0;
}