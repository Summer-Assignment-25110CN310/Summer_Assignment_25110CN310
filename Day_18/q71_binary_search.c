#include <stdio.h>

int main() {
    int size, key, found = 0;
    printf("Enter size of sorted array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements in SORTED order (Ascending):\n");
    for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = size - 1;

    // Binary Search Loop
    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d.\n", mid);
            found = 1;
            break;
        }
        // Agar key mid waale se badi hai, toh left half discard kar do
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        // Agar key mid waale se chhoti hai, toh right half discard kar do
        else {
            high = mid - 1;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}