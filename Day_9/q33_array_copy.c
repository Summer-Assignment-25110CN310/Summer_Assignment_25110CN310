#include<stdio.h>

int main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int source[size], dest[size];

    printf("Enter elements in source array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &source[i]);
    }

    // Copying elements from source to destination array
    for(int i = 0; i < size; i++) {
        dest[i] = source[i];
    }

    printf("\nElements in destination array are: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");
    return 0;
}