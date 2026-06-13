#include<stdio.h>

int main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Two-pointer approach: Shuruat aur aakhiri ke elements ko aapas me swap karenge
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap elements at start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers towards each other
        start++;
        end--;
    }

    printf("Array after reversing is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}