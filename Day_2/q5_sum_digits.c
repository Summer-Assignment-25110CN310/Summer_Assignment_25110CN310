#include<stdio.h>

int main(){
    int num, temp, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num; //original number ko safe rakh rahe hai

    //Loop chalakar ek-ek digits nikalenge aur sum mein jodenge
    while (temp != 0) {
        remainder = temp % 10; //Finding last digits
        sum = sum + remainder; //Adding this to the sum
        temp = temp / 10; //Excluding last digit from number
    }
    printf("Sum of digits of %d is: %d\n", num, sum);
    return 0;
}