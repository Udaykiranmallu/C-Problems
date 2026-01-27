#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j = 0;

    // Read input string
    gets(str);

    // Remove spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    // Print result
    printf("%s", str);

    return 0;
}
