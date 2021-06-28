#include <stdio.h>

void show();
void userGuide();
void logic(int userInput, int player);
int validate(int userInput);
int winningLogic();
void reset();
void showResult();

char arr[3][3];
int indexes[9][2] = {{0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}};
int playerOneWin = 0;
int playerTwoWin = 0;

int main()
{
    int userInput;
    int player = 1;
    int result;
    int count = 0;
    int play = 1;
    int playTime = 0;

    while (1)
    {
        if (playTime > 0)
        {
            showResult();
            printf("press 1 to play again : ");
            reset();
            scanf("%d", &play);
            player = 1;
            count = 0;
        }

        if (play != 1)
            break;

        while (play == 1)
        {
            system("cls");
            show();
            player = !player;
            player ? printf("Player-2 Turns...\n") : printf("Player-1 Turns...\n");

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
                result = winningLogic();
                count++;
                playTime++;

                if (result == 1)
                {
                    system("cls");
                    show();
                    printf("Player %d wins !! \n", result);
                    playerOneWin++;
                    break;
                }
                else if (result == 2)
                {
                    system("cls");
                    show();
                    printf("Player %d wins !! \n", result);
                    playerTwoWin++;
                    break;
                }

                if (count == 9)
                {
                    system("cls");
                    show();
                    printf("Match Draws !!\n");
                    break;
                }
            }
            else
            {
                system("cls");
                show();
                player = !player;
                printf("Wrong Input!\n");
                userGuide();
                continue;
            }
        }
    }

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
    userInput = userInput - 1;
    int row = indexes[userInput][0];
    int column = indexes[userInput][1];
    arr[row][column] = player ? '0' : 'X';
}

int validate(int userInput)
{
    userInput = userInput - 1;
    int row = indexes[userInput][0];
    int column = indexes[userInput][1];

    if (arr[row][column] == 'X' || arr[row][column] == '0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int winningLogic()
{
    if ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') ||
        (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') ||
        (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') ||
        (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') ||
        (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') ||
        (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') ||
        (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X'))
    {
        return 1;
    }
    else if ((arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0') ||
             (arr[1][0] == '0' && arr[1][1] == '0' && arr[1][2] == '0') ||
             (arr[2][0] == '0' && arr[2][1] == '0' && arr[2][2] == '0') ||
             (arr[0][0] == '0' && arr[1][0] == '0' && arr[2][0] == '0') ||
             (arr[0][1] == '0' && arr[1][1] == '0' && arr[2][1] == '0') ||
             (arr[0][2] == '0' && arr[1][1] == '0' && arr[2][0] == '0') ||
             (arr[0][0] == '0' && arr[1][1] == '0' && arr[2][2] == '0'))
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void reset()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = '\0';
        }
    }
}

void showResult()
{
    printf("Player 1 wins : %d\n", playerOneWin);
    printf("Player 2 wins : %d\n", playerTwoWin);
}