#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};   
    int i;

    printf("Enter a string:\n");
    gets(str);   
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}
