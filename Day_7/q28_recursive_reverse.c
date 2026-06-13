#include<stdio.h>

int sum = 0; // Global variable reverse number ko store karne ke liye

// Recursive function number ko reverse karne ke liye
void reverseNumber(int n) {
    // Base Case: Agar number 0 ho jaye toh loop ruk jayega
    if (n == 0) {
        return;
    }
    
    // Recursive Case: Aakhri digit ko sum mein add karo aur bache hue number ke liye function call karo
    sum = sum * 10 + (n % 10);
    reverseNumber(n / 10);
}
int main(){
    int num;
    printf("Enter a number to reverse using Recursion: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Reverse of 0 is: 0\n");
    } else {
        reverseNumber(num);
        printf("Reverse of %d is: %d\n", num, sum);
        }
    return 0;
}