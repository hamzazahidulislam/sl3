int *gradingStudents(int grades_count, int *grades, int *result_count)
{
    *result_count = grades_count;
    int *b = malloc(grades_count * sizeof(int));
    int i, x = 0;
    for (i = 0; i < grades_count; i++)
    {
        x = grades[i] / 5;
        x++;
        x = x * 5;
        if (x - grades[i] < 3 && grades[i] >= 38)
        {
            b[i] = x;
        }
        else
        {
            b[i] = grades[i];
        }
    }
    return b;
}