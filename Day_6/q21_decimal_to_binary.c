#include<stdio.h>

int main(){
    int decimal, temp;
    long long binary = 0;
    int remainder, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    temp = decimal;

    while (temp > 0) {
        remainder = temp % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        temp = temp / 2;
    }
    printf("Binary form of %d is: %lld\n", decimal, binary);
    return 0;
}