#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sun of digits: &d\n", sum);
    return 0;
}   