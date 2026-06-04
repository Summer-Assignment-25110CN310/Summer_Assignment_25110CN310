#include<stdio.h>

int main(){
    int n1, n2, max;

    printf("Enter two integers: ");
    scanf("%d%d", &n1, &n2);

    // Find the larger number
    max = (n1 > n2) ? n1 : n2;

    // Keep incrementing the larger number until it is divisible by both numbers
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("LCM of %d and %d is %d\n", n1, n2, max);
            break;
        }
        max++; //check everytime after incrementing by 1
    }

    return 0;
}