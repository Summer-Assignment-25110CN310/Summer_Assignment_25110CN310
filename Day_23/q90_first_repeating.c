#include <stdio.h>

int main() {
    char str[200];
    int visited[256] = {0}; // Yeh track rakhega ki character pehle aa chuka hai ya nahi

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int found = 0;
    // String ko left se check karte chalenge, jaise hi koi character dobara dikhega wahi answer hai
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Spaces ko check nahi karte unique characters ke liye
        if(ch == ' ' || ch == '\t') continue;

        if(visited[(unsigned char)ch] == 1) {
            printf("First repeating character is: '%c'\n", ch);
            found = 1;
            break;
        }
        visited[(unsigned char)ch] = 1; // Mark as visited
    }

    if(!found) {
        printf("No repeating character found.\n");
    }

    return 0;
}