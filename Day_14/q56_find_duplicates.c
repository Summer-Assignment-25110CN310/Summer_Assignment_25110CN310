#include <stdio.h>

int main() {
    int size, hasDuplicate = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    // Ek auxiliary (helper) array taaki visited elements ko track kiya ja sake
    int visited[size]; 

    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Shuru me sabko 0 set kiya
    }

    printf("\nDuplicate elements in the array are: ");
    for(int i = 0; i < size; i++) {
        if(visited[i] == 1) continue; // Agar pehle se checked hai toh skip karo

        int count = 1;
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark kar diya taaki dobara print na ho
            }
        }

        // Agar count 1 se zyada hai toh matlab duplicate hai
        if(count > 1) {
            printf("%d ", arr[i]);
            hasDuplicate = 1;
        }
    }

    if(!hasDuplicate) {
        printf("None");
    }
    printf("\n");

    return 0;
}