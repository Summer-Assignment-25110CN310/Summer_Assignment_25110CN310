#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Sirf alphabets ko check karenge, spaces ya special characters ko ignore karenge
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Vowel check condition (dono lower aur upper case ke liye)
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);
    return 0;
}