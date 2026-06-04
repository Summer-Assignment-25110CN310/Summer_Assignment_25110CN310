#include<stdio.h>

int main(){
    int num, remainder, reverse = 0, temp;
    printf("Enter a number to check for palindrome: ");
    scanf("%d", &num);

    temp = num; // Original number ko safe rakh rahe hai

    //Lets reverse the number first
    while (temp != 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }
    //if original number and reversed number are same then it is palindrome
    if (num == reverse) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}