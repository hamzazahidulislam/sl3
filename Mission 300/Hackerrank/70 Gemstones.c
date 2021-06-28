#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[26] = {0};
int main()
{
    int n, i, count = 0, j, l;
    scanf("%i", &n);
    char **arr = malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = (char *)malloc(10240 * sizeof(char));
        scanf("%s", arr[i]);
        l = strlen(arr[i]);
        for (j = 0; j < l; j++)
        {
            int c = arr[i][j] - 97;
            if (a[c] == i)
                a[c]++;
        }
    }
    for (i = 0; i < 26; i++)
        if (a[i] == n)
            count++;
    printf("%d\n", count);
    return 0;
}