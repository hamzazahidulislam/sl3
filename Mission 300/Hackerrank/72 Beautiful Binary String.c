#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    char *B = (char *)malloc(10240 * sizeof(char));
    scanf("%s", B);

    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (B[i] == '0')
            if (B[i + 1] == '1')
                if (B[i + 2] == '0')
                {
                    count++;
                    i = i + 2;
                }
                else
                    continue;
    }
    printf("%d", count);
    return 0;
}