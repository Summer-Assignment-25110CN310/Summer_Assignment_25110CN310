#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Frequency build up kijiye
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\t') { // Spaces ko ignore kar rahe hain
            freq[(unsigned char)str[i]]++;
        }
    }

    // Max frequency track karne ke liye logic
    int max = 0;
    char maxChar;

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character is '%c' (occurs %d times).\n", maxChar, max);
    return 0;
}