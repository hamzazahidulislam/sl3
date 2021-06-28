#include <stdio.h>
int main()
{
    int arr[100];
    int length = sizeof(arr) / 4;
    int position[50] = {0};
    int positionlength = sizeof(arr) / 4;
    int positionSize = 0;
    int indexNumber;
    int value;
    int flag = 0;

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
        for (int i = 0; i < positionlength; i++)
        {
            if (position[i] == indexNumber)
            {
                printf("please dont inser index number again\n");
                flag = 1;
                break;
            }
        }
        // for (int i = 0; i < length; i++)
        // {
        //     if (position[i] == indexNumber)
        //     {
        //         printf("please dont inser index number again\n");
        //         break;
        //     }
        //     arr[indexNumber] = value;
        //     position[positionSize] = indexNumber;
        // }

        if (!flag == 1)
        {
            arr[indexNumber] = value; //10 , 10
            position[positionSize] = indexNumber;

            positionSize++;
        }
    }
    for (int i = 0; i < positionSize; i++)
    {
        printf("index %d <--> value %d\n", position[i], arr[position[i]]);
    }
}
