#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int i, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';

    if (strcmp(str, rev) == 0) {
        printf("The string is a palindrome.");
    } else {
        printf("The string is not a palindrome.");
    }

    return 0;
}
