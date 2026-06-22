#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    // Transpose matrix ka dimension ulta ho jayega (cols x rows)
    int transpose[cols][rows]; 

    printf("\nEnter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose Logic: matrix[i][j] ban jayega transpose[j][i]
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the Matrix:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}