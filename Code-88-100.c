#include <stdio.h>
#include <string.h>

int main()
{
    char url[100];

    // Read the URL
    scanf("%s", url);

    // Check if URL starts with http:// or https://
    if (strncmp(url, "http://", 7) == 0 || strncmp(url, "https://", 8) == 0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
