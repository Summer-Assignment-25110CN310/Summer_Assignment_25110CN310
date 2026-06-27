#include <stdio.h>

struct Marksheet {
    char studentName[50];
    int rollNo;
    int physics;
    int chemistry;
    int maths;
    int total;
    float percentage;
};

int main() {
    int n;
    struct Marksheet m[20];

    printf("=== Marksheet Generation System ===\n");
    printf("Enter number of students for report cards: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &m[i].rollNo);
        printf("Student Name: ");
        scanf(" %[^\n]", m[i].studentName);
        printf("Physics Marks (out of 100): ");
        scanf("%d", &m[i].physics);
        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &m[i].chemistry);
        printf("Maths Marks (out of 100): ");
        scanf("%d", &m[i].maths);

        // Analysis computing
        m[i].total = m[i].physics + m[i].chemistry + m[i].maths;
        m[i].percentage = m[i].total / 3.0;
    }

    // Har student ke liye alag separate visual report sheet print hogi
    for (int i = 0; i < n; i++) {
        printf("\n==================================================\n");
        printf("             ACADEMIC PERFORMANCE REPORT          \n");
        printf("==================================================\n");
        printf(" Roll No: %-10d Student Name: %s\n", m[i].rollNo, m[i].studentName);
        printf("--------------------------------------------------\n");
        printf(" Subject                        Marks Obtained    \n");
        printf("--------------------------------------------------\n");
        printf(" Engineering Physics            %d / 100          \n", m[i].physics);
        printf(" Engineering Chemistry          %d / 100          \n", m[i].chemistry);
        printf(" Engineering Mathematics        %d / 100          \n", m[i].maths);
        printf("--------------------------------------------------\n");
        printf(" TOTAL MARKS: %-10d PERCENTAGE: %.2f%%\n", m[i].total, m[i].percentage);
        printf(" RESULT STATUS: %s\n", (m[i].percentage >= 40.0) ? "PASS" : "FAIL");
        printf("==================================================\n\n");
    }

    return 0;
}