#include <stdio.h>

int main() {
    int ans1, ans2, score = 0;

    printf("=== Welcome to the Mini C-Programming Quiz ===\n\n");

    // Question 1
    printf("Q1. C language kisne develop ki thi?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    printf("Your Answer (1-3): ");
    scanf("%d", &ans1);
    if(ans1 == 1) {
        printf("Correct Answer! (+5 Points)\n\n");
        score += 5;
    } else {
        printf("Wrong! Sahi jawab Dennis Ritchie hai.\n\n");
    }

    // Question 2
    printf("Q2. C language mein string end kis character se hoti hai?\n");
    printf("1. '\\n'\n2. '\\0'\n3. ';'\n");
    printf("Your Answer (1-3): ");
    scanf("%d", &ans2);
    if(ans2 == 2) {
        printf("Correct Answer! (+5 Points)\n\n");
        score += 5;
    } else {
        printf("Wrong! Sahi jawab '\\0' (Null character) hai.\n\n");
    }

    printf("==================================\n");
    printf("Quiz Over! Your Total Score: %d / 10\n", score);
    printf("==================================\n");

    return 0;
}