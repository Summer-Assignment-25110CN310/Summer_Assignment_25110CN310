#include<stdio.h>

// Function prototype
int isPerfect(int n);

int main(){
    int num;
    printf("Enter a number to check Perfect Number: ");
    scanf("%d", &num);

    if(isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    }  else {
        printf("%d is not a Perfect number.\n", num);
    }
    return 0;
}

int isPerfect(int n) {
    int sum = 0;

    // 1 se lekar n-1 tak ke divisors dhoondhenge 
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i; // Agar divisor hai toh sum me add karo
        }
    }

    if(sum == n) {
        return 1;
    }
    return 0;
}