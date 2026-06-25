#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string to reverse: ");
    scanf(" %[^\n]", str); // Leading space space/newline consume karne ke liye

    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    // Two pointers approach to swap elements from both ends
    int start = 0;
    int end = length - 1;
    char temp;

    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}