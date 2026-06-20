#include <stdio.h>
#include <limits.h> // INT_MIN ka use karne ke liye taaki sabse choti value set ki ja sake

int main() {
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    if(size < 2) {
        printf("Array must have at least two elements!\n");
        return 0;
    }

    int arr[size];
    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN;

    for(int i = 0; i < size; i++) {
        // Agar current element current maximum (first) se bhi bada hai
        if(arr[i] > first) {
            second = first; // Puraane max ko second max bana do
            first = arr[i];  // Naye number ko max bana do
        } 
        // Agar current element first se chhota hai par second se bada hai
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}