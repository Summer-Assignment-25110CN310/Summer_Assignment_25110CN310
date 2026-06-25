#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // Agar lengths match nahi karti, toh rotation possible hi nahi hai
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    // Step: Pehli string ko khud se concatenate karke temp array me store karo (A + A)
    strcpy(temp, str1);
    strcat(temp, str1);

    // Agar str2 humein temp ke andar mil jaati hai (using strstr), toh wo rotation hai
    if (strstr(temp, str2) != NULL) {
        printf("Yes, the strings are rotations of each other.\n");
    } else {
        printf("No, the strings are NOT rotations of each other.\n");
    }

    return 0;
}