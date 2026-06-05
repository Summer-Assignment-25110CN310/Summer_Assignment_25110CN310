#include<stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter a number to check perfect number: ");
    scanf("%d", &num);

    //To find sum of factors
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num && num > 0){
        printf("%d is a perfect number.\n", num);
    }else{
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}