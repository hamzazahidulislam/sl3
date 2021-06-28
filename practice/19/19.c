// #include <stdio.h>
// int main()
// {
//     int a[] = {33, -10, 100, -9, 12, 13, 15};
//     int length = sizeof(a) / 4;
//     int temp;
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = i + 1; j < length; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }
#include <stdio.h>
int main()
{
    int arr[10];
    int value;
    int size = 0;
    int isFounded = 0;
    int temp;

    while (1)
    {
        printf("Enter a vlue : ");
        scanf("%d", &value);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
            {
                isFounded = 1;
                break;
            }
        }
        if (!isFounded)
        {
            arr[size] = value;
            size++;
        }
        else
        {
            printf("value already exists\n");
        }
        isFounded = 0;
        if (size == 10)
        {
            break;
        }
    }
    printf("unsorted\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nsorted\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    return 0;
}