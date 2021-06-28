#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int match = 0;
    int i, k;
    int lengthofa = 0;
    int lengthofb = 0;
    int deletions;

    char *a = (char *)malloc(512000 * sizeof(char));
    scanf("%s", a);
    char *b = (char *)malloc(512000 * sizeof(char));
    scanf("%s", b);

    for (i = 0; i < 10000; i++)
    {
        if (isalpha(a[i]))
        {
            lengthofa++;
        }
    }

    for (k = 0; k < 10000; k++)
    {
        if (isalpha(b[k]))
        {
            lengthofb++;
        }
    }

    for (i = 0; i < lengthofa; i++)
    {

        for (k = 0; k < lengthofb; k++)
        {
            if (a[i] == b[k])
            {
                match++;
                b[k] = 0;
                k = lengthofb - 1;
            }
            else
            {
            }
        }
    }

    deletions = (lengthofa - match) + (lengthofb - match);
    printf("%d \n", deletions);
    return 0;
}