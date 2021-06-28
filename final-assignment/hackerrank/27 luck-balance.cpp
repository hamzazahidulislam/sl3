int luckBalance(int k, vector<vector<int>> contests)
{

    int totalLostLuck = 0;
    int totalGainedLuck = 0;
    int totalRegainedLuck = 0;
    vector<int> regainedLuck(k, 0);

    for (int i = 0; i < contests.size(); i++)
    {
        if (contests[i][1] == 1)
        {
            totalLostLuck += contests[i][0];
            for (int j = 0; j < k; j++)
            {
                // Choose to win the contests that have the greatest
                // amount of luck
                if (regainedLuck[j] < contests[i][0])
                {
                    regainedLuck[j] = contests[i][0];
                    sort(regainedLuck.begin(), regainedLuck.end());
                    j = k;
                }
            }
        }
        // If it is a non-important contest, we get the luck for free!
        else
        {
            totalGainedLuck += contests[i][0];
        }
    }

    for (int i = 0; i < k; i++)
    {
        totalRegainedLuck += regainedLuck[i];
    }

    return totalGainedLuck - totalLostLuck + (2 * totalRegainedLuck);
}
//https://www.hackerrank.com/challenges/luck-balance/problem