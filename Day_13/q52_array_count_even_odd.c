#include <stdio.h>

int main() {
    int size, evenCount = 0, oddCount = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in the array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Ek-ek element ko 2 se mod (%) karke check karenge
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++; // 2 se poora divide hua toh Even counters badhao
        } else {
            oddCount++;  // Warna Odd counter badhao
        }
    }

    printf("Total Even elements: %d\n", evenCount);
    printf("Total Odd elements: %d\n", oddCount);

    return 0;
}