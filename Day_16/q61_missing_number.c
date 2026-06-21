#include <stdio.h>

int main() {
    int n;
    // Agar array me n-1 elements hain, toh total numbers n hone chahiye
    printf("Enter the total number of elements expected (n): ");
    scanf("%d", &n);

    int arr[n - 1];
    int actualSum = 0;

    printf("Enter %d elements (from 1 to %d with one missing):\n", n - 1, n);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i]; // Array ke elements ka total sum
    }

    // Mathematical formula se 1 se n tak ka expected sum nikalenge
    int expectedSum = (n * (n + 1)) / 2;

    // Dono sum ka difference hi missing number hoga
    int missingNumber = expectedSum - actualSum;

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}