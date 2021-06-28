char *hackerrankInString(char *s)
{
    char hr[] = "hackerrank";
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == hr[j])
            j++;
    }
    if (j == strlen(hr))
        return "YES";
    return "NO";
}
