#include <stdio.h>
int main()
{
    int v, n, ar[1000], i;
    scanf("%d", &v);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (i = 0; i < n; i++)
    {
        if (ar[i] == v)
            printf("%d", i);
    }
    return 0;
}
