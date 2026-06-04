#include<stdio.h>
#include<math.h>

int main(){
    int low, high, number, originalNumber, remainder, result, n;

    printf("Enter lower bound: ");
    scanf("%d", &low);
    printf("Enter upper bound: ");
    scanf("%d", &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for (number = low + 1; number < high; ++number) {
        originalNumber = number;

        //To count digits
        n = 0;
        while (originalNumber != 0) {
            originalNumber /= 10;
            ++n;
        }

        // Calculate the sum of the nth power of its digits
        originalNumber = number;
        result = 0;

        //To find sum
        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += round(pow(remainder, n));
            originalNumber /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == number) {
            printf("%d ", number);
        }
    }

    printf("\n");
    return 0;
}