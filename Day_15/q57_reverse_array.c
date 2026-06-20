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

    // Two-pointer approach: start shuru me aur end aakhiri element par
    int start = 0;
    int end = size - 1;
    
    while(start < end) {
        // Elements ko swap (aapas me badalna) kar rahe hain
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++; // start ko aage badhao
        end--;   // end ko peeche lao
    }

    printf("Reversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}