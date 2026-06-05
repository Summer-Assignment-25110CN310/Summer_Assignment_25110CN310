#include<stdio.h>

int main(){
    int num;

    printf("Enter a number to find its factors: ");
    scanf("%d", &num);


    //To find and print factors
    printf("Factors of %d are: ", num);
    //To find factors
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}   