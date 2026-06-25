#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string to compress: ");
    scanf(" %[^\n]", str);

    printf("Compressed string: ");
    
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1;
        
        // Jab tak consecutive characters same hain, count badhate jao
        while (str[i] == str[i + 1] && str[i + 1] != '\0') {
            count++;
            i++;
        }
        
        // Character aur uska count print karo
        printf("%c%d", str[i], count);
    }
    printf("\n");

    return 0;
}