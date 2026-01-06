#include <stdio.h>

int main() {
    int n, i, count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Counting positive numbers
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    printf("Number of positive elements = %d", count);

    return 0;
}
