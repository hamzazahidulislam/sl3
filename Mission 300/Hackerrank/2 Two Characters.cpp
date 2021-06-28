// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int length, i, j, k = 0, l, f = 0, m = 1, n = 1, result = 0, answer = 0;
//     scanf("%d", &length);
//     char s[length], a[26];
//     scanf("%s", s);
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         for (j = k; j >= 0; j--)
//         {
//             if (s[i] == a[j])
//             {
//                 f = 0;
//                 break;
//             }
//             else
//             {
//                 f = 1;
//             }
//             if (f == 1)
//             {
//                 a[k] = s[i];
//                 k++;
//             }
//         }
//     }
//     for (i = 0; i <= k; i++)
//     {
//         for (j = i + 1; j <= k; j++)
//         {
//             for (l = 0; s[l] != '\0'; l++)
//             {
//                 if (a[i] == s[l] && n == 1)
//                 {
//                     result++;
//                     n = 0;
//                     m = 1;
//                 }
//                 else if (a[i] == s[l])
//                 {
//                     result = 0;
//                     break;
//                 }
//                 else if (a[j] == s[l] && m == 1)
//                 {
//                     result++;
//                     m = 0;
//                     n = 1;
//                 }
//                 else if (a[j] == s[l])
//                 {
//                     result = 0;
//                     break;
//                 }
//             }
//             if (result > answer)
//                 answer = result;
//             result = 0;
//             m = n = 1;
//         }
//     }
//     if (answer == 1)
//         printf("0");
//     else
//         printf("%d", answer);
//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n; /* useless to us, but whatever... */
    std::string s;
    std::cin >> s;

    std::vector<int> freq(26, 0);
    for (const char &c : s)
        freq[c - 'a']++;

    int max = 0;
    char last;
    bool valid;

    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] == 0)
            continue;

        for (int j = i + 1; j < freq.size(); j++)
        {

            if (freq[j] == 0)
                continue;

            last = -1;
            valid = true;
            for (const char &c : s)
            {
                if (c == char(i + 'a') || c == char(j + 'a'))
                {
                    if (last == c)
                    {
                        valid = false;
                        break;
                    }
                    last = c;
                }
            }

            if (valid && std::abs(freq[i] - freq[j]) <= 1)
                max = std::max(max, freq[i] + freq[j]);
        }
    }
    std::cout << max << std::endl;

    return 0;
}