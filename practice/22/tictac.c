#include <stdio.h>

void show();
void userGuide();
void logic(int userInput, int player);
int validate(int userInput);

char arr[3][3];

int main()
{
    int userInput;
    int player = 1;

    do
    {
        show();
        player = !player;
        if (player)
        {
            printf("Player-2 Turns...\n");
        }
        else
        {
            printf("Player-1 Turns...\n");
        }
        userGuide();
        scanf("%d", &userInput);
        int value = validate(userInput);
        if (value == 1)
        {
            player = !player;
            printf("Value Already Exists!\n");
            continue;
        }

        if (userInput >= 1 && userInput <= 9)
        {
            logic(userInput, player);
        }
        else
        {
            show();
            printf("Wrong Input!\n");
            userGuide();
            continue;
        }
    } while (1);

    return 0;
}

void userGuide()
{
    printf("Enter input from 1 to 9 : ");
}

void show()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == '\0')
            {
                printf("[     ]  ");
            }
            else
            {
                printf("[  %c  ]  ", arr[i][j]);
            }
        }
        printf("\n");
    }
}

void logic(int userInput, int player)
{
    if (userInput == 1)
    {
        if (player)
        {
            arr[0][0] = '0';
        }
        else
        {
            arr[0][0] = 'X';
        }
    }
    else if (userInput == 2)
    {

        if (player)
        {
            arr[0][1] = '0';
        }
        else
        {
            arr[0][1] = 'X';
        }
    }
    else if (userInput == 3)
    {

        if (player)
        {
            arr[0][2] = '0';
        }
        else
        {
            arr[0][2] = 'X';
        }
    }
    else if (userInput == 4)
    {

        if (player)
        {
            arr[1][0] = '0';
        }
        else
        {
            arr[1][0] = 'X';
        }
    }
    else if (userInput == 5)
    {

        if (player)
        {
            arr[1][1] = '0';
        }
        else
        {
            arr[1][1] = 'X';
        }
    }
    else if (userInput == 6)
    {

        if (player)
        {
            arr[1][2] = '0';
        }
        else
        {
            arr[1][2] = 'X';
        }
    }
    else if (userInput == 7)
    {
        if (player)
        {
            arr[2][0] = '0';
        }
        else
        {
            arr[2][0] = 'X';
        }
    }
    else if (userInput == 8)
    {
        if (player)
        {
            arr[2][1] = '0';
        }
        else
        {
            arr[2][1] = 'X';
        }
    }
    else if (userInput == 9)
    {
        if (player)
        {
            arr[2][2] = '0';
        }
        else
        {
            arr[2][2] = 'X';
        }
    }
}

int validate(int userInput)
{
    int row;
    int column;

    if (userInput == 1)
    {
        row = 0;
        column = 0;
    }
    else if (userInput == 2)
    {
        row = 0;
        column = 1;
    }
    else if (userInput == 3)
    {
        row = 0;
        column = 2;
    }
    else if (userInput == 4)
    {
        row = 1;
        column = 0;
    }
    else if (userInput == 5)
    {
        row = 1;
        column = 1;
    }
    else if (userInput == 6)
    {
        row = 1;
        column = 2;
    }
    else if (userInput == 7)
    {
        row = 2;
        column = 0;
    }
    else if (userInput == 8)
    {
        row = 2;
        column = 1;
    }
    else if (userInput == 9)
    {
        row = 2;
        column = 2;
    }

    if (arr[row][column] == 'X' || arr[row][column] == '0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}