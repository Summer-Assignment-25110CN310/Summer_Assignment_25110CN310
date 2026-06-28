#include <stdio.h>

int main() {
    // 0 = Available, 1 = Booked (Matrix Layout)
    int seats[3][4] = {
        {0, 1, 0, 0},
        {0, 0, 1, 1},
        {0, 0, 0, 0}
    };
    int row, col;

    printf("=== Show/Movie Ticket Booking System ===\n\n");
    printf("Current Theater Seat Matrix (0: Empty, 1: Reserved):\n");
    printf("      Col 1  Col 2  Col 3  Col 4\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("  %d    ", seats[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter Row Number (1-3) to book: ");
    scanf("%d", &row);
    printf("Enter Column Number (1-4) to book: ");
    scanf("%d", &col);

    // Internal execution tracking arrays boundary mapping
    int rIdx = row - 1;
    int cIdx = col - 1;

    if (rIdx >= 0 && rIdx < 3 && cIdx >= 0 && cIdx < 4) {
        if (seats[rIdx][cIdx] == 0) {
            seats[rIdx][cIdx] = 1; // Booked status update
            printf("\n🎉 Success: Row %d, Seat %d has been successfully booked!\n", row, col);
        } else {
            printf("\n❌ Error: Seat already booked! Please select a vacant seat.\n");
        }
    } else {
        printf("\n❌ Error: Invalid Row or Column index selected.\n");
    }

    return 0;
}