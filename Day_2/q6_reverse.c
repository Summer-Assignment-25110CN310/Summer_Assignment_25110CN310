#include<stdio.h>

int main(){
    int num, remainder, reverse = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder; // Reverse number is generating
        temp = temp / 10;
    }
    printf("Reverse of %d = %d\n", num, reverse);
    return 0;
}