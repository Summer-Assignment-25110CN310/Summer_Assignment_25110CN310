#include<stdio.h>

int main(){
    int n, sum = 0;

    //Taking value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //Calculating the sum by apply loop from 1 to n
    for(int i = 1; i <= n; i++) {
        sum = sum + i; //Adding every number in the sum variable
    }
    
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}