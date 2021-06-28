#include <stdio.h>

#define MAX_ROW_COL (201)
#define BOMB (79)
#define EMPTY ('.')
#define TEMP ('A')

typedef int INT32;

char gGrid[MAX_ROW_COL][MAX_ROW_COL];

int main(void)
{
    INT32 nLpCnt1, nR, nC, nS, nLpCnt2, ndCnt;

    //read nN, nK
    scanf("%d%d%d", &nR, &nC, &nS);

    //read the matrix
    for (nLpCnt1 = 0; nLpCnt1 < nR; nLpCnt1++)
        scanf("%s", gGrid[nLpCnt1]);

    if (nS < 2)
    {
        for (nLpCnt1 = 0; nLpCnt1 < nR; nLpCnt1++)
            printf("%s\n", gGrid[nLpCnt1]);
        return 0;
    }

    nS %= 4;

    if ((nS == 0) || (nS == 2)) //all bombs
    {
        for (nLpCnt1 = 0; nLpCnt1 < nR; nLpCnt1++)
            for (nLpCnt2 = 0; nLpCnt2 < nC; nLpCnt2++)
                gGrid[nLpCnt1][nLpCnt2] = BOMB;
    }
    else //bombs detonated once or twice
    {
        if (nS == 3)
            nS = 1;
        else
            nS = 2;
        for (ndCnt = 0; ndCnt < nS; ndCnt++)
        {
            for (nLpCnt1 = 0; nLpCnt1 < nR; nLpCnt1++)
            {
                //form the array with temp
                for (nLpCnt2 = 0; nLpCnt2 < nC; nLpCnt2++)
                {
                    if (gGrid[nLpCnt1][nLpCnt2] == BOMB)
                    {
                        gGrid[nLpCnt1][nLpCnt2] = TEMP;

                        if (nLpCnt1 > 0)
                        {
                            gGrid[nLpCnt1 - 1][nLpCnt2] = TEMP;
                        }

                        if (nLpCnt2 > 0)
                        {
                            gGrid[nLpCnt1][nLpCnt2 - 1] = TEMP;
                        }

                        if (((nLpCnt1 + 1) < nR) && (gGrid[nLpCnt1 + 1][nLpCnt2] != BOMB))
                        {
                            gGrid[nLpCnt1 + 1][nLpCnt2] = TEMP;
                        }

                        if (((nLpCnt2 + 1) < nC) && (gGrid[nLpCnt1][nLpCnt2 + 1] != BOMB))
                        {
                            gGrid[nLpCnt1][nLpCnt2 + 1] = TEMP;
                        }
                    }
                }
            }

            //convert empty to bombs and temp to empty
            for (nLpCnt1 = 0; nLpCnt1 < nR; nLpCnt1++)
            {
                //form the array with temp
                for (nLpCnt2 = 0; nLpCnt2 < nC; nLpCnt2++)
                {
                    if (gGrid[nLpCnt1][nLpCnt2] == EMPTY)
                        gGrid[nLpCnt1][nLpCnt2] = BOMB;
                    else
                        gGrid[nLpCnt1][nLpCnt2] = EMPTY;
                }
            }
        }
    }

    for (nLpCnt1 = 0; nLpCnt1 < nR; nLpCnt1++)
        printf("%s\n", gGrid[nLpCnt1]);

    return 0;
}
//https://www.hackerrank.com/challenges/bomber-man/problem