#include<stdio.h>

// Function prototype/declaration
int findSum(int a, int b);

int main(){
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function ko call kiya aur result store kiya
    result = findSum(num1, num2);

    printf("Sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}

// Function definition - Yeh do numbers lekar unka sum return karega
int findSum(int a, int b) {
    return a + b;
}