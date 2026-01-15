#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char username[50];
    int i, valid = 1;
    int length;

    printf("Enter username: ");
    scanf("%s", username);

    length = strlen(username);

    // Check length
    if (length < 6 || length > 12) {
        valid = 0;
    }

    // Check if first character is a digit
    if (isdigit(username[0])) {
        valid = 0;
    }

    // Check for lowercase letters and digits only
    for (i = 0; i < length; i++) {
        if (!(islower(username[i]) || isdigit(username[i]))) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Username is VALID\n");
    else
        printf("Username is INVALID\n");

    return 0;
}
