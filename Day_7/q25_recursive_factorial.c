#include <stdio.h>

//Recursive function factorial nikalne ke liye 
int factorial(int n) {
    // Base Case: 0 ya 1 ka factorial hamesha 1 hota hai
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive Case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number to find Factorial using Recursion: ");
    Scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of Negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %d\n", num, factorial(num));
    }
    return 0;
}