#include<stdio.h>

int main(){
    int size, element, pos;

    printf("Enter current size of the array: ");
    scanf("%d", &size);

    int arr[size + 1]; // Extra space for the new element

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    // Validate position
    if(pos > size + 1 || pos <= 0) {
        printf("Invalid position!\n");
    } else {
        // Naye element le liye jagah banane ke liye elements ko shift karna
        for(int i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Sahi index par element insert kiya (position - 1 kyuki index 0 se start hota hai)
        arr[pos - 1] = element;
        size++; // Size ko increment karna after insertion

        printf("Array after insertion: ");
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    printf("\n");
}   
    return 0;
}