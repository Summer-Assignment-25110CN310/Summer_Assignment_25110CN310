#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int len = 0;
    while(str[len] != '\0') len++;

    int start = 0;
    int end = len - 1;
    int isPalindrome = 1;

    while(start < end) {
        if(str[start] != str[end]) {
            isPalindrome = 0; // Agar mismatch mila toh palindrome nahi hai
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome) {
        printf("The string is a Palindrome.\n");
    } else {
        printf("The string is NOT a Palindrome.\n");
    }

    return 0;
}