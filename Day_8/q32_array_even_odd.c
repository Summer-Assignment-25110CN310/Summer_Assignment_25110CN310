#include<stdio.h>

int main(){
    int size, evenCount = 0, oddCount = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    return 0;
}