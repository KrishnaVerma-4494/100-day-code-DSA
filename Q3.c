#include <stdio.h>

int findMissing(int arr[], int n)
{
    int expectedSum = n * (n + 1) / 2; 
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        actualSum += arr[i];
    }

    return expectedSum - actualSum; 
}

int main()
{
    int n;
    
    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int missing = findMissing(arr, n);

    printf("Missing number is: %d\n", missing);

    return 0;
}
