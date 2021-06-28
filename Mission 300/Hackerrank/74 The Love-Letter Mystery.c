#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(char *s)
{
    int ans = 0;
    int a, b, c;
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            a = s[i];
            b = s[j];
            c = abs(a - b);
            ans = ans + c;
        }
    }
    return ans;
}