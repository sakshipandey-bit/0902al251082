#include <stdio.h>

int main()
{
    int n, i, sum = 0, missing;
    int arr[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    missing = n * (n + 1) / 2 - sum;

    printf("Missing number = %d", missing);

    return 0;
}
