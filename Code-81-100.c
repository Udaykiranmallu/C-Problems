#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char otp[20];
    int i, length, valid = 1;

    printf("Enter the 6-digit OTP: ");
    scanf("%s", otp);

    length = strlen(otp);

    // Check length
    if (length != 6) {
        valid = 0;
    } else {
        // Check if all characters are digits
        for (i = 0; i < length; i++) {
            if (!isdigit(otp[i])) {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        printf("Valid OTP. Authentication successful.\n");
    else
        printf("Invalid OTP. Please enter a 6-digit numeric OTP.\n");

    return 0;
}