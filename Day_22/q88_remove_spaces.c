#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string with spaces: ");
    scanf(" %[^\n]", str);

    int count = 0; // Yeh pointer sirf non-space characters ko target karega

    for(int i = 0; str[i] != '\0'; i++) {
        // Agar space nahi hai, toh character ko aage shift karo
        if(str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0'; // Nayi string ko properly terminate kiya

    printf("String after removing spaces: %s\n", str);
    return 0;
}