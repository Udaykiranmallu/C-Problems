#include <stdio.h>
#include <string.h>

int main() {
    char code[100];
    int i, len, flag = 1;

    printf("Enter product code: ");
    scanf("%s", code);   // reads string without spaces

    len = strlen(code);

    for (i = 0; i < len / 2; i++) {
        if (code[i] != code[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The product code is a Palindrome\n");
    else
        printf("The product code is NOT a Palindrome\n");

    return 0;
}
