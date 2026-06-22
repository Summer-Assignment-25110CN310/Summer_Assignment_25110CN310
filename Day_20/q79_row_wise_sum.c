#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("\nEnter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) scanf("%d", &matrix[i][j]);
    }

    printf("\nRow-wise Sum:\n");
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += matrix[i][j]; // Ek row ke saare columns ko add kar rahe hain
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}