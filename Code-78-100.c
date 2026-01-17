#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    printf("Enter password: ");
    scanf("%s", password);

    // Check length
    if (strlen(password) < 8)
    {
        printf("Password is Weak\n");
        return 0;
    }

    // Analyze each character in the string
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
    }

    // Final validation
    if (hasUpper && hasLower && hasDigit)
        printf("Password is Strong\n");
    else
        printf("Password is Weak\n");

    return 0;
}
