// #include <stdio.h>
// int main()
// {
//     int i, j, k, a, b, t, n, swap, z;
//     scanf("%d", &t);
//     for (k = 0; k < t; k++)
//     {
//         scanf("%d", &n);
//         scanf("%d %d", &a, &b);
//         int arr[n];
//         for (i = n - 1, j = 0; j < n; i--, j++)
//             arr[j] = (a * i) + (b * j);
//         for (i = 0, z = 0; i < n; i++)
//         {
//             if (arr[i] != NULL)
//             {
//                 for (j = i + 1; j < n; j++)
//                 {
//                     if (arr[j] == arr[i])
//                         arr[j] = NULL;
//                 }
//                 arr[z] = arr[i];
//                 z++;
//             }
//         }
//         for (i = 0; i < z - 1; i++)
//         {
//             for (j = 0; j < z - i - 1; j++)
//             {
//                 if (arr[j] > arr[j + 1])
//                 {
//                     swap = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = swap;
//                 }
//             }
//         }
//         for (i = 0; i < z; i++)
//             printf("%d", arr[i]);
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int i;
    int n, a, b, t;
    int c[1000] = {
        0,
    };

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);

        for (i = 0; i < n; i++)
        {
            if (a == b)
            {
                printf("%d ", a * (n - 1));
                break;
            }
            else if (a > b)
                c[i] = (b * (n - 1 - i)) + (a * i);

            else
                c[i] = (a * (n - i - 1)) + (b * i);
            printf("%d ", c[i]);
        }

        printf("\n");
    }
    return 0;
}