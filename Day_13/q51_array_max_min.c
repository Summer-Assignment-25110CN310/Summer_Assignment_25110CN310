#include <stdio.h>

int main() {
    int size, max, min;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in the array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Shuruat me hum pehle element (index 0) ko hi max aur min maan lete hain
    max = arr[0];
    min = arr[0];

    // Poore array me traverse karke comparison karenge
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Agar naya bada number mila toh max ko update karo
        }
        if(arr[i] < min) {
            min = arr[i]; // Agar naya chhota number mila toh min ko update karo
        }
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}