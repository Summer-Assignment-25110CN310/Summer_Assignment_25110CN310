#include <stdio.h>

int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) scanf("%d", &arr[i]);

    // Selection Sort Algorithm
    for(int i = 0; i < size - 1; i++) {
        int min_idx = i; // Pehle current index ko hi minimum maan lete hain
        
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j; // Agar aur chhota element mila toh index update karo
            }
        }

        // Sabse chhote element ko sahi jagah par swap kar do
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array (Selection Sort): ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}