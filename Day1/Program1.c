#include <stdio.h>
int main()
{
    int n, sum = 0 ;
    printf("Enter the value of n to calculate sum : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        sum+= i;
    }
    printf("Sum up to n natural number is : %d", sum);
    return 0;
}