#include<stdio.h>

int main(){
    long long num;
    int count = 0;

    //User se number input le rahe hai
    printf("Enter any number: ");
    scanf("%lld", &num);

    //Agar user 0 input kare toh digit 1 hogi
    if(num == 0) {
        count = 1;
    } else {
        //Loop to count the digits
        while(num != 0) {
            num = num / 10; //Removing the last digit
            count++; //Incrementing the count for each digit removed
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}