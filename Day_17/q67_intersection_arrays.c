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

    int intersectionArr[n1 < n2 ? n1 : n2];
    int k = 0;

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                // Check unique intersection entry
                int duplicate = 0;
                for(int m = 0; m < k; m++) {
                    if(arr1[i] == intersectionArr[m]) { duplicate = 1; break; }
                }
                if(!duplicate) {
                    intersectionArr[k++] = arr1[i];
                }
                break;
            }
        }
    }

    printf("\nIntersection of arrays: ");
    if(k == 0) printf("No common intersection elements found.");
    for(int i = 0; i < k; i++) printf("%d ", intersectionArr[i]);
    printf("\n");

    return 0;
}