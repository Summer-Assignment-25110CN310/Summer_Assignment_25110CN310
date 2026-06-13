#include<stdio.h>

int main(){
    int size, max, min;

    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    //shuruat me pehle elements ko hi max aur min maal lenge
    max = arr[0];
    min = arr[0];
    
    // Baki bache elements se compare karenge
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Agar naya bada element mila toh usko max bana do
        }
        if(arr[i] < min) {
            min = arr[i]; // Agar naya chhota element mila toh usko min bana do
        }
    }
    
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);
    
    return 0;
}