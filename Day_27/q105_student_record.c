#include <stdio.h>

// Student details store karne ke liye structure
struct Student {
    int rollNo;
    char name[50];
    float gpa;
};

int main() {
    int n;
    struct Student s[20];

    printf("=== Student Record Management System ===\n");
    printf("Kitne students ka data enter karna hai? ");
    scanf("%d", &n);

    // Records taking logic
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("GPA: ");
        scanf("%f", &s[i].gpa);
    }

    // Display formatted outputs
    printf("\n========================= STUDENT RECORDS =========================\n");
    printf("%-10s %-30s %-10s\n", "Roll No", "Student Name", "GPA");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-30s %-10.2f\n", s[i].rollNo, s[i].name, s[i].gpa);
    }
    printf("===================================================================\n");

    return 0;
}