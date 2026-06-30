#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
};

int main() {
    struct Book collection[5];
    int n, choice;

    printf("=== MINI LIBRARY SYSTEM ===\n");
    printf("Kitni books enter karna chahte hain (Max 5): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", collection[i].title);
        printf("Author: ");
        scanf(" %[^\n]", collection[i].author);
        printf("Pages: ");
        scanf("%d", &collection[i].pages);
    }

    printf("\n=== LIBRARY CATALOG ===\n");
    printf("%-25s %-20s %-10s\n", "Book Title", "Author", "Pages");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-25s %-20s %-10d\n", collection[i].title, collection[i].author, collection[i].pages);
    }
    return 0;
}