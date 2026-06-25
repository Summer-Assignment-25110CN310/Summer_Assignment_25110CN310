#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0}; // Saare characters ki frequency store karne ke liye

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Step 1: Saare characters ki frequency count karo
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Step 2: String ko firse left-to-right scan karo aur pehla frequency 1 wala character dhoodho
    int found = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character is: '%c'\n", str[i]);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("No non-repeating character found in the string.\n");
    }

    return 0;
}