// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, i, *arr, x, k, j;
//     scanf("%d", &n);
//     arr = (int *)malloc(n * sizeof(int));
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     x = arr[n - 1];
//     for (i = n - 1; i >= 0; i--)
//     {
//         j = i - 1;
//         for (k = 0; k < n; k++)
//         {
//             if (arr[j] > x)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 arr[j + 1] = x;
//                 i = -1;
//             }
//             printf("%d", arr[k]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
void insertionSort1(int n, int arr_count, int *arr)
{
    for (int i = 1; i < n; i++)
    {
        int item = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        arr[j + 1] = item;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}