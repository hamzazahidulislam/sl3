#include <stdio.h>
int add(int num1, int num2);
int multiply(int num1, int num2);

void swap(int *value, int *value2)
{
    int temp = *value;
    *value = *value2;
    *value2 = temp;
}
int main()
{
    int a = 10;
    int b = 15;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
