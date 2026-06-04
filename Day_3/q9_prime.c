#include<stdio.h>

int main(){
    int num, isPrime = 1; //Assuming number is prime until proven otherwise
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    //0 and 1 are not prime numbers
    if(num <= 1) {
        isPrime = 0;
    } else {
        //Loop to check if number is divisible by any number from 2 to sqrt(num)
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) { //If number is divisible by any number then it is not prime
                isPrime = 0;
                break; //No need to check further
            }
        }
    }
    if(isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}