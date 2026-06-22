#include <stdio.h>

int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

    // Bubble Sort Algorithm
    for(int i = 0; i < size - 1; i++) {
        // Aakhiri ke i elements pehle se hi sorted position par hote hain
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array (Bubble Sort): ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}