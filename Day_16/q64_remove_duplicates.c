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

    int newSize = 0; // Yeh unique elements ke naye size ko track karega

    for(int i = 0; i < size; i++) {
        int isDuplicate = 0;
        
        // Check karenge ki current element naye unique wale part me pehle se toh nahi hai
        for(int j = 0; j < newSize; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // Agar duplicate nahi hai, toh use array ke unique part me aage shift kar do
        if(!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Array after removing duplicates: ");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}