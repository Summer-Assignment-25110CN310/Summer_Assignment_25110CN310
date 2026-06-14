#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        // Print spaces
        for(int j = 1; j <= rows - i; j++){
            printf(" ");
        }
        // Print numbers
        for(int k = 1; k <= i; k++){
            printf("%d ", k);
        }

        for(int l = i - 1; l >= 1; l--){
            printf("%d ", l);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}