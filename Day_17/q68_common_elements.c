#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of 1st array: "); scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements:\n");
    for(int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of 2nd array: "); scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements:\n");
    for(int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("\nCommon Elements are: ");
    int found = 0;

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break; // Is index ke liye match mil gaya
            }
        }
    }

    if(!found) printf("None");
    printf("\n");

    return 0;
}