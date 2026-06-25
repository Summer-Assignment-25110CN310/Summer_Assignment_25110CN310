#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string in lowercase: ");
    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++) {
        // Agar character lowercase alphabet hai tabhi convert karein
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Lowercase se Uppercase conversion gap
        }
    }

    printf("String in Uppercase: %s\n", str);
    return 0;
}