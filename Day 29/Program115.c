#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int choice;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    do 
    {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n");
        printf("2. Reverse\n");
        printf("3. Uppercase\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("Lenght = %lu\n", strlen(str));
            break;
            case 2:
            {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                printf("Reverse = %s\n", temp);
                break;
            }
            case 3:
            for (int i = 0; str[i] != '\0'; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                printf("%c", str[i] - 32);
                else
                printf("%c", str[i]);
            }
            printf("\n");
            break;
            case 4:
            printf("Exiting...\n");
            break; 
            default:
            printf("Invalid Choice!\n");
        }
    }
    while (choice != 4);
    return 0;
}