#include <stdio.h>

int main() {
    int size, key, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search: Ek-ek karke har element ko check karenge
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d.\n", key, i);
            found = 1;
            break; // Element milte hi loop se bahar nikal jao
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}