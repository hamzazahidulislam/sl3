#include <stdio.h>

const int BUCKETS = 201;

void show_diff(int big[], int little[], int offset)
{
    int first = 1;

    for (int i = 0; i < BUCKETS; ++i)
    {
        if (big[i] > little[i])
        {
            if (first)
            {
                printf("%d", offset + i);
                first = 0;
            }
            else
            {
                printf(" %d", offset + i);
            }
        }
    }
}

void init_buckets(int buckets[])
{
    for (int i = 0; i < BUCKETS; ++i)
    {
        buckets[i] = 0;
    }
}

int main()
{
    int a[BUCKETS],
        b[BUCKETS],
        offset,
        i,
        val,
        size1,
        size2;

    init_buckets(a);
    init_buckets(b);

    scanf("%d", &size1);
    scanf("%d ", &offset);
    a[100] = 1;
    offset -= 100;
    for (i = 1; i < size1; ++i)
    {
        scanf("%d", &val);
        ++a[val - offset];
    }

    scanf("%d", &size2);
    for (i = 0; i < size2; ++i)
    {
        scanf("%d", &val);
        ++b[val - offset];
    }

    if (size1 < size2)
    {
        show_diff(b, a, offset);
    }
    else
    {
        show_diff(a, b, offset);
    }

    return 0;
}