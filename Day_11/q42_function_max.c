#include<stdio.h>

// Function protype
int findMax(int a, int b);

int main(){
    int num1, num2, max;
    printf("Enter two numbers to find maximum: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    max = findMax(num1, num2);
    
    printf("Maximum number is: %d\n", max);
    return 0;
}
    
//Function definition
int findMax(int a, int b) {
    if(a > b) {
        return a; // Agar a bada hai toh a return karo
    } else {
        return b; // warnab return karo
    }
}