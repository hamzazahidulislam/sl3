#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, a;
    scanf("%d", &n);
    int count[100] = {0};
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        count[a]++;
    }
    for (i = 0; i < 100; i++)
    {
        for (j = 1; j <= count[i]; j++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}