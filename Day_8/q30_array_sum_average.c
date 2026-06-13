#include<stdio.h>

int main(){
    int size, sum = 0;
    float average;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; //Input lete hi sum mein add karte chalenge
    }

    average = (float)sum / size; // Average nikalne ke liye sum ko size se divide karenge

    printf("Sum of all elements = %d\n", sum);
    printf("Average of all elements in the array is: %.2f\n", average);
    return 0;
}