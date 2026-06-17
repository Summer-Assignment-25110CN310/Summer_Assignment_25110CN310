#include<stdio.h>

// Function prototype
int isArmstrong(int n);

int main(){
    int num;
    printf("Enter a number to check Armstrong: ");
    scanf("%d", &num);

    if(isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    }
    return 0;
}

int isArmstrong(int n) {
    int original = n;
    int sum = 0, remainder;

    while (n > 0)
    {
        remainder = n % 10;
        // Har digit ka cube karke sum me add kar rahe hai
        sum += (remainder * remainder * remainder);
        n /= 10;
    }
    
    if(original == sum) {
        return 1;
    }
    return 0;
}