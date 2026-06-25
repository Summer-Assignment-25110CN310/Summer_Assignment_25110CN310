#include <stdio.h>

int main() {
    char str[200];
    int hash[256] = {0}; // Tracks visited characters

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int newIndex = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        // Agar character pehli baar aaya hai, toh use accept karo
        if (hash[(unsigned char)str[i]] == 0) {
            hash[(unsigned char)str[i]] = 1;
            str[newIndex++] = str[i];
        }
    }
    str[newIndex] = '\0'; // Modified string termination

    printf("String after removing duplicates: %s\n", str);
    return 0;
}