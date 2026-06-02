#include <stdio.h>
int main()
{
    int num, rem, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        rem = num % 10;
        prod *= rem;
        num /= 10;
    }
    printf("Products of digits = %d\n", prod);
    return 0;
}