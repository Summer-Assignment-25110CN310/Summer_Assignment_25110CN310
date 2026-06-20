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

    // Pehle element ko safe rakh lete hain
    int first = arr[0];

    // Saare elements ko ek step left shift kar rahe hain
    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Pehle element ko aakhiri index par daal diya
    arr[size - 1] = first;

    printf("Array after left rotation: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}