#include <stdio.h>

int main() {
    int a[100], n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] < 0) {
            count++;
        }
    }

    printf("Number of negative elements = %d", count);

    return 0;
}
