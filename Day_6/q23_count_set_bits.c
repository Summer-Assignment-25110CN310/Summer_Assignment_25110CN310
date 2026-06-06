#include<stdio.h>

int main(){
    int num, temp, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count the number of set bits using bitwise operations
    while (temp > 0) {
        if (temp & 1) {
            count++;
        }
        temp = temp >> 1;
    }
    printf("Total number of set bits (1s) in %d is: %d\n", num, count);
    return 0;
}