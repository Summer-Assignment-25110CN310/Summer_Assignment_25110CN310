#include<stdio.h>

int main(){
    long long binary, temp;
    int decimal = 0,remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;
    int place = 1;

    // Convert binary to decimal
    while (temp > 0) {
        remainder = temp % 10;
        decimal = decimal + (remainder * base);
        base = base * 2; // Update the base for the next bit
        temp = temp / 10;
    }

    printf("Decimal form of %lld is: %d\n", binary, decimal);
    return 0;
}