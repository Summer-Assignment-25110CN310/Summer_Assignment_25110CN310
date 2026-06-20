#include <stdio.h>

int main() {
    int size, target, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    // Poore array me check karenge ki target kitni baar repeat hua hai
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            count++;
        }
    }

    printf("Frequency of %d is: %d\n", target, count);
    return 0;
}