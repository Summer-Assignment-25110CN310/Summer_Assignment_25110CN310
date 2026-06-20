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

    int count = 0; // Yeh non-zero elements ka track rakhega

    // Agar element zero nahi hai, toh use aage shift karte jao
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Ab jitne khali spaces bache hain, unhe zeroes se bhar do
    while(count < size) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeroes to end: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}