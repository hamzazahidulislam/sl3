// Complete the marsExploration function below.
int marsExploration(char *s)
{
    char signal[3] = "SOS";
    int count = 0;
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != signal[j])
            count++;
        j++;
        if (j == 3)
            j = 0;
    }
    return count;
}