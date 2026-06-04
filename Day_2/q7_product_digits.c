#include<stdio.h>

int main(){
    int num, temp, remainder, product = 1; //Let the value of product is 1

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    //agar user 0 input kare toh product 0 hogi
    if(num == 0) {
        product = 0;
    } else {
    while (temp != 0) {
        remainder = temp % 10;
        product = product * remainder; // Multiplying this with the product
        temp = temp / 10;
       }
    }
    printf("Product of digits of %d is: %d\n", num, product);
    return 0;
}