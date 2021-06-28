#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    float a[n], p = 0, q = 0, z = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] > 0)
        {
            p++;
        }
        else if (a[i] < 0)
        {
            q++;
        }
        else
        {
            z++;
        }
    }
    printf("%f\n%f\n%f\n", p / n, q / n, z / n);
}
//https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true