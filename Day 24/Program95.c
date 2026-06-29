#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], longest[50] = "";
    char *word;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    word = strtok(str, "\n");
    while (word != NULL)
    {
        if (strlen(word) > strlen(longest))
        strcpy(longest, word);
        word = strtok(NULL, "\n");
    }
    printf("Longest word: %s", longest);
    return 0;
}