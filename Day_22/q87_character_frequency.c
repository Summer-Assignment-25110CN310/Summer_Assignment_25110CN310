#include <stdio.h>

int main() {
    char str[200];
    // Frequency store karne ke liye array (saare ASCII characters ke liye size 256)
    int freq[256] = {0}; 

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    // Har character ki mapping uski ASCII value ke index par count badhaegi
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequencies:\n");
    for(int i = 0; str[i] != '\0'; i++) {
        // Agar character pehli baar encounter ho raha hai display ke liye
        if(freq[(unsigned char)str[i]] != 0) {
            printf("'%c' : %d times\n", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0; // Dubara print na ho isliye 0 set kiya
        }
    }

    return 0;
}