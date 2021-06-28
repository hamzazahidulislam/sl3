#include <stdio.h>
int main()
{
    char st[1000], alpha;
    int i, flag;
    scanf("%[^\n]", st);
    for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
        flag = 0;
        for (i = 0; st[i] != '\0'; i++)
        {
            if (st[i] == alpha || st[i] == alpha - 32) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
            break;
    }
    if (flag == 0)
        printf("not pangram");
    else
        printf("pangram");
    return 0;
}