#include<stdio.h>

// Function prototype - 1 return karega agar palindrome hai, warna 0
int isPalindrome(int n);

int main(){
    int num;
    printf("Enter a number to check Palindrome: ");
    scanf("%d", &num);

    if(isPalindrome(num)) {
        printf("%d is a Palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}

int isPalindrome(int n) {
    int original = n;
    int reversed = 0, remainder;

    while (n < 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // Agar ulta kiya hua number original ke barabar hai
    if(original == reversed) {
        return 1;
    }
    return 0;
}