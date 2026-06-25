#include <stdio.h>

int main() {
    char str[200], longest[50] = "";
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int maxLen = 0, currentLen = 0, startIdx = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        // Agar alphanumeric character hai toh current word ki length badhao
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (currentLen == 0) {
                startIdx = i; // Naye word ka starting point copy kiya
            }
            currentLen++;
        } 
        // Jaise hi space ya termination mile, comparison karo
        else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                // Longest word ko extract karke temporary store karo
                int k = 0;
                for (int j = startIdx; j < i; j++) {
                    longest[k++] = str[j];
                }
                longest[k] = '\0';
            }
            currentLen = 0; // Length reset for next word
        }
    }

    // Last word ke liye edge case validation handler
    if (currentLen > maxLen) {
        int k = 0;
        for (int j = startIdx; str[j] != '\0'; j++) {
            longest[k++] = str[j];
        }
        longest[k] = '\0';
    }

    printf("The longest word is: \"%s\"\n", longest);
    return 0;
}