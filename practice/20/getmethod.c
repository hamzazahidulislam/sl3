// #include <stdio.h>
// int main()
// {
//     char name[100];
//     int size = 0;
//     while ((name[size++] = getchar()) != '\n')
//     {

//         if (size == sizeof(name) - 1)
//         {
//             break;
//         }
//     }
//     name[size] = '\0';
//     printf("%s", name);
//     printf("%d", size + 1);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char names[2][100];
//     int size = 0;
//     char somthing;
//     for (int i = 0; i < 2; i++)
//     {
//         while ((somthing = getchar()) != '\n')
//         {
//             names[i][size++] = somthing;
//             if (size == sizeof(names) - 1)
//             {
//                 break;
//             }
//         }
//         names[i][size] = '\0';
//         size = 0;
//         // gets(names[i]);
//     }

//     printf("%s and %s", names[0], names[1]);

//     return 0;
// }