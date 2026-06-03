#include<stdio.h>

int main(){
    int n;
    unsigned long long factorial = 1; //To store big values

    //User se number input kaarwa rahe hai
    printf("Enter an integer: ");
    scanf("%d", &n);

    //Factorial of negative number is not defined
    if (n < 0) {
        printf("Error! Factorialof a negative number doesn't exist.\n");
    } else {
        //loop for multiply from 1 to n
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // factorial = factorial * i
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}