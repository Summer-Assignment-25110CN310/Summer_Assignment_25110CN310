#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];
    int primarySum = 0, secondarySum = 0;

    printf("\nEnter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal Sum Logic
    for(int i = 0; i < n; i++) {
        primarySum += matrix[i][i];             // Elements like (0,0), (1,1), (2,2)
        secondarySum += matrix[i][n - 1 - i];   // Elements like (0, n-1), (1, n-2)
    }

    printf("\nSum of Primary Diagonal: %d\n", primarySum);
    printf("Sum of Secondary Diagonal: %d\n", secondarySum);

    return 0;
}