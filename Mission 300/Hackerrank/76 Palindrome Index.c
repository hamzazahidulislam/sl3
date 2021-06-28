int palindromeIndex(char *s)
{
    int l = 0, r = strlen(s) - 1, ans = -1;
    while (l < r)
    {
        if (s[l] == s[r])
        {
            r--;
            l++;
        }
        else
        {
            if (s[l] == s[r - 1] && s[l + 1] == s[r - 2])
            {
                ans = r;
            }
            else
            {
                ans = l;
            }
            break;
        }
    }
    return ans;
}