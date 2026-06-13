#include<stdio.h>

int main(){
    int size, pos;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted (1 to %d): ", size);
    scanf("%d", &pos);

    if(pos < 1 || pos > size) {
        printf("Invalid position!\n");
    } else {
        // Shifting elements to fill the gap left by the deleted element
        for(int i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Decrementing size after deletion

        printf("Array after deletion: ");
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}