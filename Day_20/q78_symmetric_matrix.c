#include <stdio.h>

int main() {
    int n, isSymmetric = 1;
    printf("Enter size of square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nEnter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    }

    // Symmetry Check Logic
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Agar ek bhi element match nahi hua, toh symmetric nahi hai
                break;
            }
        }
        if(!isSymmetric) break;
    }

    if(isSymmetric) {
        printf("\nThe matrix is a Symmetric Matrix.\n");
    } else {
        printf("\nThe matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}