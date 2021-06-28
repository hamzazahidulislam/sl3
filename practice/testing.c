// #include <stdio.h>
// int main()
// {
//     printf("%d",5 % 3-1);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//    double num = 8.33;
//    int result;

//    result = ceil(num);
//    printf("Ceiling integer of %.2f = %d", num, result);

//    return 0;
// }
#include <stdio.h>
#include <math.h>

int main()
{
   double num = -8.33;
   int result;

   result = floor(num);

   printf("Floor integer of %.2f = %d", num, result);
   return 0;
}