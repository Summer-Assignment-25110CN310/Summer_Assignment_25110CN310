#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, sum;

    while (1) {
        printf("\n=== ARRAY OPERATIONS SYSTEM ===\n");
        printf("1. Initialize/Input Array\n");
        printf("2. Display Array Elements\n");
        printf("3. Calculate Sum of Elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        switch (choice) {
            case 1:
                printf("Array ka size enter karein: ");
                scanf("%d", &n);
                printf("%d elements enter karein:\n", n);
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("Array initialized successfully!\n");
                break;
            case 2:
                if (n == 0) {
                    printf("Array empty hai! Pehle initialize karein.\n");
                } else {
                    printf("Array elements: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                if (n == 0) {
                    printf("Array empty hai!\n");
                } else {
                    sum = 0;
                    for (int i = 0; i < n; i++) {
                        sum += arr[i];
                    }
                    printf("Sum of elements: %d\n", sum);
                }
                break;
            default:
                printf("Invalid Selection!\n");
        }
    }
    return 0;
}