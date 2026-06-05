#include <stdio.h>
int main()
{
    int n, largestPrime = 1;
    printf("Enter the number");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largestPrime = i;
            n /= i;
        }
    }
    printf("Largest Prime Factor = %d", largestPrime);
    return 0;
}