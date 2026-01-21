#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    // Read the sentence
    fgets(str, sizeof(str), stdin);

    // Capitalize first character if it is lowercase
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;   // Convert to uppercase
        // OR use: str[0] = toupper(str[0]);
    }

    // Print the result
    printf("%s", str);

    return 0;
}
