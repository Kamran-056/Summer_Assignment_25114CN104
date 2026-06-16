#include <stdio.h>
int main()
{
    int n, sum = 0, expected, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements: ", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    expected = n * (n + 1) / 2;
    printf("Missing number = %d", expected - sum);
    return 0;
}