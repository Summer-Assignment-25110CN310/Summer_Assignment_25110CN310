#include<stdio.h>

int main(){
    int num, originalNumber, remainder, sum = 0;

    printf("Enter a number to check Strong Number: ");
    scanf("%d", &num);

    originalNumber = num;

    //To find sum of factorial of digits
    while(num != 0){
        remainder = num % 10;

        //To calculate factorial
        int fact = 1;
        for(int i = 1; i <= remainder; i++){
            fact *= i;
        }
        sum += fact; //Add factorial to sum
        num /= 10;
    }

    if(sum == originalNumber){
        printf("%d is a Strong Number.\n", originalNumber);
    }else{
        printf("%d is not a Strong Number.\n", originalNumber);
    }

    return 0;
}