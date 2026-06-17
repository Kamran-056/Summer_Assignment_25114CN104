#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    int unionArr[20], n = 0, i, j, found;
    for(i = 0; i < 4; i++)
    unionArr[n++] = a[i];
    for(i = 0; i < 4; i++)
    {
        found = 0;
        for(j = 0; j < n; j++)
        {
            if(b[i] == unionArr[j])
            {
                found = 1; 
                break;
            }
        }
        if(!found)
        unionArr[n++] = b[i];
    }
    printf("Union: ");
    for(i = 0; i < n; i++)
    printf("%d", unionArr[i]);
    return 0;
}