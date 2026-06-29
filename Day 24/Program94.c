#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count;
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++)
    {
        count = 1;
        while (i < strlen(str) - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    return 0;
}