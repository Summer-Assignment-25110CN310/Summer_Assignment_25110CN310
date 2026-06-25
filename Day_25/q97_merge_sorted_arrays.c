#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array:\n");
    for(int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array:\n");
    for(int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int i = 0, j = 0, k = 0;
    // Dono arrays ko sath me compare karte hue merge karenge
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Agar arr1 me elements bache hain
    while (i < n1) merged[k++] = arr1[i++];

    // Agar arr2 me elements bache hain
    while (j < n2) merged[k++] = arr2[j++];

    printf("Merged sorted array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}