#include<stdio.h>

//Recursive function fibonacci term nikalne ke liye
int fibonacci(int n) {
    // Base Case: pehla term 0 aur doosra term 1 hota hai
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive Case: f(n) = f(n-1) f(n-2)
    return fibonacci(n -1) + fibonacci(n-2);
}

int main(){
    int terms;
    printf("Enter the number of terms for fibonacci series: ");
    scanf("%d", &terms);   

    printf("Fibonacci Series up to %d term: ", terms);
    // Loop chalakar har ek position ka term print kar rahe hain
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}