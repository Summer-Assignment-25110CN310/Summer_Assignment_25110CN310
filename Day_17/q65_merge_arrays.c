#include <stdio.h>

int main() {
    int n1, n2;

    // First Array Input
    printf("Enter size of 1st array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of 1st array:\n");
    for(int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    // Second Array Input
    printf("Enter size of 2nd array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of 2nd array:\n");
    for(int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    // Teesra array dono ke total size ka hoga
    int mergedSize = n1 + n2;
    int mergedArr[mergedSize];

    // Pehle array ke elements ko copy kiya
    for(int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

    // Doosre array ke elements ko n1 index ke baad se copy kiya
    for(int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }

    printf("\nMerged Array: ");
    for(int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}