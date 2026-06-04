#include<stdio.h>

int main(){
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2; //next term is the sum of previous two terms
        t1 = t2; //update t1 to t2
        t2 = nextTerm; //update t2 to next term
    }
    printf("\n");
    return 0;
}