#include<stdio.h>

//recursive function digits ka sum nikalne ke liye
int sumOfDigits(int n) {
    // Base Case: Agar number 0 ho jaye toh loop ruk jayega
    if (n == 0) {
        return 0;
    }

// Recursive Case: Aakhri digit + bache hue number ka sum
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Agar number negative hai toh usko positive bana do
    int temp = (num < 0) ? -num : num;

    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}