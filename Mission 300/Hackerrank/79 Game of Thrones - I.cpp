#include <iostream>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int arr[26] = {0};
    int i = 0, count = 0;
    while (s[i] != '\0')
    {
        arr[s[i] - 97]++;
        i++;
    }
    i = 0;
    while (i < 26)
    {
        if (arr[i] % 2 != 0)
        {
            if (count < 1)
                count++;
            else
            {
                cout << "NO";
                return 0;
            }
        }
        i++;
    }
    cout << "YES";
    return 0;
}