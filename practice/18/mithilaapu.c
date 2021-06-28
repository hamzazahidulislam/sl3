#include <stdio.h>
int main()
{
    int arr[100] = {0};
    int length = sizeof(arr) / 4;
    int position[50];
    int positionlength = sizeof(arr) / 4;
    int positionSize = 0;
    int indexNumber;
    int value;

    while (1) // no breakcondition
    {
        //index form user
        printf("enter the index number : ");
        scanf("%d", &indexNumber);
        //no validation break
        if (indexNumber < 0)
        {
            printf("Breaking loop\n");
            break;
        }

        if (indexNumber >= 100)
        {
            printf("array index out of bount\n");
            continue;
        }
        //value from user
        printf("enter value : ");
        scanf("%d", &value);

        arr[indexNumber] = value;

        position[positionSize] = indexNumber;

        positionSize++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (arr[i])
            printf("position %d index %d <--> value %d\n", i, arr[i]);
    }
}