string gridChallenge(vector<string> grid)
{
    // Sort every string's character
    int rows = grid.size();
    for (int i = 0; i < rows; i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }

    // Now that every string's characters are sorted
    // Check the number of columns.
    // It should be equal to the number of characters in the first string.
    int columns = grid[0].size();
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (grid[i][j] > grid[i + 1][j])
                return "NO";
        }
    }
    return "YES";
}
//https://www.hackerrank.com/challenges/grid-challenge/problem