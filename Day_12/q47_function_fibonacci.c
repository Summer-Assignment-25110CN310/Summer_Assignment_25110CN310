#include<stdio.h>

// Function prototype - Yeh series ko directly print karega, isliye 'void' hai
void printFibonacci(int n);

int main(){
    int terms;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    
    printf("Fibonacci series: ");
    printFibonacci(terms);

    return 0;
}

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}