#include <stdio.h>

int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

    // Sorting in Descending Order (Bubble sort variant)
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            // Sirf check lagayenge (<) ka taaki bade elements aage rahein
            if(arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array in Descending Order: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}