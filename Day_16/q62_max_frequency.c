#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int visited[size]; // Element track karne ke liye takii dobara count na ho

    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    int maxFreq = 0;
    int maxElement = arr[0];

    for(int i = 0; i < size; i++) {
        if(visited[i] == 1) continue;

        int count = 1;
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        // Agar is element ki frequency pichli max frequency se zyada hai
        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency is %d (Appeared %d times).\n", maxElement, maxFreq);
    return 0;
}