#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d\n", sum);
}

//https://www.hackerrank.com/challenges/simple-array-sum/problem

//second way
// #include <stdio.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;

//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     printf("%d\n", sum);
// }

//third way
// #include <stdio.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr);
//         sum = sum + arr;
//     }
//     printf("%d\n", sum);
// }