#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase character: ");
    scanf("%c", &ch);
    // Convert the character to lowercase
    ch = ch + 32;
    // Print the lowercase character
    printf("Lowercase character: %c\n", ch);

    return 0;
}

