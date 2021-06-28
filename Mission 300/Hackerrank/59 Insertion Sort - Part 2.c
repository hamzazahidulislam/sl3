#include <stdio.h>
void print(int a[], int n);
int main()
{
    int n, a[100000], i, x, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = a[i];
        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
            a[j + 1] = x;
        }
        print(a, n);
    }
    return 0;
}

void print(int a[], int n)
{
    int k;
    for (k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
}