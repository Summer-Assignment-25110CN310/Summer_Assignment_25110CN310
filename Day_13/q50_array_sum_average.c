#include <stdio.h>

int main() {
    int size, sum = 0;
    float average;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Input lene ke sath hi sum calculate kar rahe hain
    }

    // Average nikalne ke liye sum ko total elements (size) se divide kiya typecast karke
    average = (float)sum / size;

    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}