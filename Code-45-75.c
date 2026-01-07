#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Average of array elements = %.2f", average);

    return 0;
}
