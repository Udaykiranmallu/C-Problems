#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];   // Assume first element is minimum

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum element in the array = %d", min);

    return 0;
}
