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

    int unionArr[n1 + n2];
    int k = 0;

    // Pehle array ke saare elements unique part me daal diye (bina duplicates check kiye agar arr1 khud unique hai)
    for(int i = 0; i < n1; i++) {
        int duplicate = 0;
        for(int j = 0; j < k; j++) {
            if(arr1[i] == unionArr[j]) { duplicate = 1; break; }
        }
        if(!duplicate) unionArr[k++] = arr1[i];
    }

    // Doosre array ke elements ko check karke daalenge taaki repeat na ho
    for(int i = 0; i < n2; i++) {
        int duplicate = 0;
        for(int j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("\nUnion of arrays: ");
    for(int i = 0; i < k; i++) printf("%d ", unionArr[i]);
    printf("\n");

    return 0;
}