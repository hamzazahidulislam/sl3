char *funnyString(char *s)
{
    int len = strlen(s) - 1;
    for (int i = 0; i <= len; i = i + 2, len = len - 2)
    {
        if (abs(s[i] - s[i + 1]) != abs(s[len] - s[len - 1]))
            return "Not Funny";
    }
    return "Funny";
}