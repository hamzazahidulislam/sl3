#include <stdio.h>
int main()
{
    int n = 3, al = 0, bb = 0;
    int i, a[3], b[3];
    //alic
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //bob
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    //compare
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            al += 0;
            bb += 0;
        }
        else if (a[i] > b[i])
        {
            al += 1;
            bb += 0;
        }
        else
        {
            bb += 1;
            al += 0;
        }
    }
    //alic and bob point
    printf("%d %d", al, bb);
}
//https://www.hackerrank.com/challenges/compare-the-triplets/problem