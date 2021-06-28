long marcsCakewalk(vector<int> calorie)
{
    sort(calorie.begin(), calorie.end());
    int cakes = calorie.size();
    int x = 0;
    long miles = 0;
    for (int i = cakes - 1; i >= 0; --i)
    {
        miles += calorie[i] * pow(2, x);
        x++;
    }
    return miles;
}