#include<stdio.h>

// Function prototype
long long findFactorial(int n);

int main(){
    int num;
    printf("Enter a number to find Factorial: ");
    scanf("%d", &num);
    
    if(num < 0) {
        print("Factorial of negative  numbers doesn't exist!\n");
    } else {
        // Function call
        long long fact = findFactorial(num);
        printf("Factorial of %d is: %lld\n", num, fact);
    }
    return 0;
}

// Function definition
long long findFactorial(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i; // 1 se lekar n tak multiplykar rahe hai
    }
    return f;
}