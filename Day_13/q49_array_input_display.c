#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Array elements user se input lene ke liye loop
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Array elements ko screen par display karne ke liye loop
    printf("\nThe elements in the array are: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}