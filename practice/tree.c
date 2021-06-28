#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter Number of Rows");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) // 1<4  i = 1<1
    {
        for (j = 1; j < i; j++) //1 < 2
        {
            printf(" ");
        }
        for (j = 1; j <= (rows * 2 - (2 * i - 1)); j++) // 7
        {
            printf("*");
        }
        printf("\n");
    }
}