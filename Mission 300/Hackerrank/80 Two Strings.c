#include <stdio.h>
#include <string.h>
int main()
{
    int test, i, flag = 0;
    char a[100008], b[100008];
    scanf("%d", &test);
    while (test--)
    {
        flag = 0;
        int hash[26] = {0};
        scanf("%s", a);
        scanf("%s", b);
        int len, len1;
        len = strlen(a);
        len1 = strlen(b);
        for (i = 0; i < len; i++)
            hash[a[i] - 'a']++;
        for (i = 0; i < len1; i++)
        {
            if (hash[b[i] - 'a'])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}