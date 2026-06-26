#include <stdio.h>

int main() {
    int age, choice;
    int cand1 = 0, cand2 = 0, NOTA = 0;

    printf("=== Voting Eligibility & Simulation System ===\n");
    printf("Sabhse pehle apni Age enter karein: ");
    scanf("%d", &age);

    // Age validation criteria check
    if (age < 18) {
        printf("Sorry, aapki age %d hai. Aap vote dene ke liye eligible nahi hain.\n", age);
        return 0;
    }

    printf("\nCongratulations! Aap eligible hain. Kripya apna vote dalein:\n");
    printf("1. Candidate A\n");
    printf("2. Candidate B\n");
    printf("3. NOTA\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            cand1++;
            printf("Vote successfully casted for Candidate A!\n");
            break;
        case 2:
            cand2++;
            printf("Vote successfully casted for Candidate B!\n");
            break;
        case 3:
            NOTA++;
            printf("Vote casted for NOTA.\n");
            break;
        default:
            printf("Invalid Choice! Aapka vote waste ho gaya.\n");
    }

    return 0;
}