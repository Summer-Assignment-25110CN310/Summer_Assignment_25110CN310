#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Aakhiri element ko safe rakh lete hain
    int last = arr[size - 1];

    // Saare elements ko aakhiri se ek step right shift kar rahe hain
    for(int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Safe rakha hua aakhiri element ab pehle index par aa jayega
    arr[0] = last;

    printf("Array after right rotation: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}