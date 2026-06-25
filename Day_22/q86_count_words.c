#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int words = 0;
    int inWord = 0; // Flag track karne ke liye ki hum word ke andar hain ya nahi

    for(int i = 0; str[i] != '\0'; i++) {
        // Agar current character space ya tab ya newline hai
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } 
        // Agar alphabet/character mila aur flag 0 tha, matlab naya word shuru hua
        else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    printf("Total number of words: %d\n", words);
    return 0;
}