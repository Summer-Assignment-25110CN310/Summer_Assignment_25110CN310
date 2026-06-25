#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    // %[^\n] use karne se spaces ke sath poori line input ho jaati hai
    scanf("%[^\n]", str); 

    // Null character tak loop chalayenge
    while(str[length] != '\0') {
        length++;
    }

    printf("Length of the string is: %d\n", length);
    return 0;
}