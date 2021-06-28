#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::string str;
    while (n--)
    {
        int count = 0;
        bool occurrences[26] = {};
        std::cin >> str;
        for (char c : str)
        {
            const int index = c - 'a';
            if (!occurrences[index])
            {
                occurrences[index] = true;
                if (++count == 26)
                    break;
            }
        }
        std::cout << count << "\n";
    }
}