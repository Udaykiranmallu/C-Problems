#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);   // or use fgets(str, 100, stdin);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d", length);

    return 0;
}
