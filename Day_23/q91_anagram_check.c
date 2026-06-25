#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // Pehli string ke characters ke liye frequency badhao
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != ' ') count[(unsigned char)str1[i]]++;
    }

    // Doosri string ke characters ke liye frequency ghatao
    for(int i = 0; str2[i] != '\0'; i++) {
        if(str2[i] != ' ') count[(unsigned char)str2[i]]--;
    }

    // Agar dono anagram hain, toh count array ke saare elements wapas 0 hone chahiye
    int isAnagram = 1;
    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram) {
        printf("The strings are Anagrams.\n");
    } else {
        printf("The strings are NOT Anagrams.\n");
    }

    return 0;
}