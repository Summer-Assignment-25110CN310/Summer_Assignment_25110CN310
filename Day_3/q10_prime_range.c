#include<stdio.h>

int main(){
    int low, high, isPrime;

    printf("Enter lower bound (starting): ");
    scanf("%d", &low);
    
    printf("Enter upper bound (ending): ");
    scanf("%d", &high);
    printf("Prime numbers between %d and %d are: ", low, high);

    //Loop to check each number in the range from low to high
    for(int i = low; i <= high; i++) {
        if(i <= 1) {
            continue; // Skip numbers less than or equal to 1
        }
        isPrime = 1; 

        // Check karne ke liye ki kya 'i'prime hai
        for(int j = 2; j <= i /2; j++) {
            if(i % j == 0) { //If number is divisible by any number then it is not prime
                isPrime = 0;
                break; //No need to check further
            }
        }
        if(isPrime == 1) {
            printf("%d ", i); //Print the prime number
        }
    }
    printf("\n");
    return 0;
}