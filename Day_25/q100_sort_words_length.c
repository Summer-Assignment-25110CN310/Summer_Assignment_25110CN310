#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char words[50][50], temp[50];

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Length ke basis par bubble sort logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap words
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %lu)\n", words[i], strlen(words[i]));
    }

    return 0;
}