#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; // Array ban gaya

    // Elements ko input karne ke liye loop
    printf("Enter the elements of the array: ");
    for(int i=0; i < size; i++){
        printf("Elements arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    // Elements print karne ke liye loop
    printf("\nElements of the array are: ");
    for(int i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}