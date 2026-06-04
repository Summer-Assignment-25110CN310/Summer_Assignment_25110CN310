#include<stdio.h>

int main(){
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The %1st Fibonacci term is: %d\n", n, t1);
    } else if (n == 2) {
        printf("The %2nd Fibonacci term is: %d\n", n, t2);
    } else {
        // Calculate Fibonacci terms until the nth term
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2; //next term is the sum of previous two terms
            t1 = t2; //update t1 to t2
            t2 = nextTerm; //update t2 to next term
        }
        printf("The %dth Fibonacci term is: %d\n", n, t2);
    }
    return 0;
}