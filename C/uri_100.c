// #include <stdio.h>
// #include <math.h>
// #define PI 3.14159
// int main()
// {
//     double R, A;
//     scanf("%lf", &R);
//     A = PI * (R * R);
//     printf("A=%.4lf\n", A);
//     return 0;
// }
/// 4
// #include <stdio.h>
// int main()
// {
//     int A, B, SOMA;
//     scanf("%d", &A);
//     scanf("%d", &B);
//     SOMA = A + B;
//     printf("SOMA = %d\n", SOMA);
//     return 0;
// }
/// 5
// #include <stdio.h>
// int main()
// {
//     int A, B, PROD;
//     scanf("%d %d", &A, &B);
//     PROD = A * B;
//     printf("PROD = %d\n", PROD);
//     return 0;
// }
/// 7
// #include <stdio.h>
// int main()
// {
//     float A, B, MEDIA;
//     scanf("%f %f ", &A, &B);
//     MEDIA = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
//     printf("MEDIA = %.5f\n",MEDIA);
//     return 0;
// }
///7
// #include <stdio.h>
// int main()
// {
//     float A, B, C, MEDIA;
//     scanf("%f %f  %f", &A, &B, &C);
//     MEDIA = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);
//     printf("MEDIA = %.1f\n", MEDIA);
//     return 0;
// }
/// 8
// #include <stdio.h>
// int main()
// {
//     int A, B, C, D, DIFERENCA;
//     scanf("%d %d  %d %d", &A, &B, &C, &D);
//     DIFERENCA = (A * B - C * D);
//     printf("DIFERENCA = %d\n", DIFERENCA);
//     return 0;
// }
/// 9
// #include <stdio.h>
// int main()
// {
//     int n, t;
//     float s, SALARY;
//     scanf("%d %d  %f", &n, &t, &s);
//     SALARY = (t * s);
//     printf("NUMBER = %d\n", n);
//     printf("SALARY = U$ %.2f\n", SALARY);
//     return 0;
// }
/// 1009
// #include <stdio.h>
// int main()
// {
//     char n[30];
//     float sa;
//     double s, TOTAL;
//     gets(n);
//     scanf("%f %lf", &sa, &s);
//     TOTAL = sa + (s * 15) / 100;
//     printf("TOTAL = R$ %.2lf\n", TOTAL);
//     return 0;
// }
/// 1010
// #include <stdio.h>
// int main()
// {
//     int qty, qty2, u1, u2;
//     float p1, p2, VALOR;
//     scanf("%d %d %f", &u1, &qty, &p1);
//     scanf("%d %d %f", &u2, &qty2, &p2);
//     VALOR = (qty * p1) + (qty2 * p2);
//     printf("VALOR A PAGAR: R$ %.2f\n", VALOR);
//     return 0;
// }
/// 1011
// #include <stdio.h>
// #define PI 3.14159
// int main()
// {
//     float v;
//     double VOLUME;
//     scanf("%f", &v);
//     VOLUME = (4 / 3.0) * PI * (v * v * v);
//     printf("VOLUME = %.3lf\n", VOLUME);
//     return 0;
// }
/// 1012
// #include <stdio.h>
// #define PI 3.14159
// int main()
// {
//     float A, B, C;
//     double tri, c, tra, s, r;
//     scanf("%f %f %f", &A, &B, &C);
//     tri = .5 * A * C;
//     c = PI * (C * C);
//     tra = (A + B) / 2 * C;
//     s = B * B;
//     r = A * B;
//     printf("TRIANGULO: %.3lf\n", tri);
//     printf("CIRCULO: %.3lf\n", c);
//     printf("TRAPEZIO: %.3lf\n", tra);
//     printf("QUADRADO: %.3lf\n", s);
//     printf("RETANGULO: %.3lf\n", r);
//     return 0;
// }
// 1013
// #include <stdio.h>
// int main()
// {
//     int a, b, c, max_value;
//     scanf("%d %d %d", &a, &b, &c);
//     max_value = a;
//     if (b > max_value)
//     {
//         max_value = b;
//     }
//     if (c > max_value)
//     {
//         max_value = c;
//     }
//     printf("%d eh o maior\n", max_value);
// }
//1014
// #include <stdio.h>
// int main()
// {
//     int x;
//     float y;
//     scanf("%d %f", &x, &y);
//     printf("%.3f km/l\n", (x / y));
// }
//1015
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     double x1, y1, x2, y2;
//     scanf("%lf %lf", &x1, &y1);
//     scanf("%lf %lf", &x2, &y2);

//     double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//     printf("%.4lf\n", distance);
//     return 0;
// }
//1016
// #include <stdio.h>
// int main()
// {
//     int distance;
//     scanf("%d", &distance);
//     printf("%d minutos\n", (distance * 2));
//     return 0;
// }
//1017
// #include <stdio.h>
// int main()
// {
//     int time, speed;
//     scanf("%d %d", &time, &speed);
//     int distance = time * speed;
//     printf("%.3f\n", (distance / 12.0));
//     return 0;
// }
//1018
// #include <stdio.h>
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     printf("%d\n", x);
//     printf("%d nota(s) de R$ 100,00\n", x / 100);
//     x = x % 100;
//     printf("%d nota(s) de R$ 50,00\n", x / 50);
//     x = x % 50;
//     printf("%d nota(s) de R$ 20,00\n", x / 20);
//     x = x % 20;
//     printf("%d nota(s) de R$ 10,00\n", x / 10);
//     x = x % 10;
//     printf("%d nota(s) de R$ 5,00\n", x / 5);
//     x = x % 5;
//     printf("%d nota(s) de R$ 2,00\n", x / 2);
//     x = x % 2;
//     printf("%d nota(s) de R$ 1,00\n", x);

//     return 0;
// }
//#1019
// #include <stdio.h>
// int main()
// {
//     int h, m, s;
//     scanf("%d", &s);
//     h = 0;
//     m = 0;
//     h = s / 3600;
//     s = s % 3600;
//     m = s / 60;
//     s = s % 60;
//     printf("%d:%d:%d\n", h, m, s);
//     return 0;
// }
//#1020
// #include <stdio.h>
// int main()
// {
//     int year, month, days;
//     scanf("%d", &days);
//     year = 0;
//     month = 0;
//     year = days / 365;
//     days = days % 365;
//     month = days / 30;
//     days = days % 30;
//     printf("%d ano(s)\n", year);
//     printf("%d mes(es)\n", month);
//     printf("%d dia(s)\n", days);
//     return 0;
// }
//#1021
// #include <stdio.h> //100, 50, 20, 10, 5, 2 coin 1, 0.50, 0.25, 0.10, 0.05 , last 0.01.
// int main()         //10000,5000,2000,1000,500,200,50,25,10,5,1
// {
//     double l;
//     int a, b, c, d, e, f, g, h, i, j, k, n;
//     scanf("%lf", &l);
//     n = l * 100;
//     a = n / 10000;
//     n = n % 10000;
//     b = n / 5000;
//     n = n % 5000;
//     c = n / 2000;
//     n = n % 2000;
//     d = n / 1000;
//     n = n % 1000;
//     e = n / 500;
//     n = n % 500;
//     f = n / 200;
//     n = n % 200;
//     g = n / 100;
//     n = n % 100;
//     h = n / 50;
//     n = n % 50;
//     i = n / 25;
//     n = n % 25;
//     j = n / 10;
//     n = n % 10;
//     k = n / 5;
//     n = n % 5;
//     printf("NOTAS:\n");
//     printf("%d nota(s) de R$ 100.00\n", a);
//     printf("%d nota(s) de R$ 50.00\n", b);
//     printf("%d nota(s) de R$ 20.00\n", c);
//     printf("%d nota(s) de R$ 10.00\n", d);
//     printf("%d nota(s) de R$ 5.00\n", e);
//     printf("%d nota(s) de R$ 2.00\n", f);
//     printf("MOEDAS:\n");
//     printf("%d moeda(s) de R$ 1.00\n", g);
//     printf("%d moeda(s) de R$ 0.50\n", h);
//     printf("%d moeda(s) de R$ 0.25\n", i);
//     printf("%d moeda(s) de R$ 0.10\n", j);
//     printf("%d moeda(s) de R$ 0.05\n", k);
//     printf("%d moeda(s) de R$ 0.01\n", n);
//     return 0;
// }
//#1035
// #include <stdio.h>
// int main()
// {
//     int A, B, C, D;
//     scanf("%d %d %d %d", &A, &B, &C, &D);
//     if ((B > C) && (D > A) && (C + D > A + B) && (C >= 0 && D >= 0) && (A % 2 == 0))
//     {
//         printf("Valores aceitos\n");
//     }
//     else
//         printf("Valores nao aceitos\n");

//     return 0;
// }
//#1036
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a, b, c, x, y, z;
//     scanf("%f %f %f", &a, &b, &c);
//     x = (b * b) - (4 * a * c);
//     if (x < 0)
//         printf("Impossivel calcular\n");
//     else if (a == 0)
//         printf("Impossivel calcular\n");
//     else
//     {
//         y = (-b + sqrt(x)) / (a + a);
//         z = (-b - sqrt(x)) / (a + a);
//         printf("R1 = %.5f\n", y);
//         printf("R2 = %.5f\n", z);
//     }
//     return 0;
// }
//#1037
// #include <stdio.h>
// #include <math.h>
// int main()
// {

//     return 0;
// }
//decending
// #include <stdio.h>
// int main()
// {
//     int number[30];
//     int i, j, a, n;
//     printf("how many number you check\n");
//     scanf("%d", &n);
//     printf("add you number \n");
//     for (i = 0; i < n; ++i)
//         scanf("%d", &number[i]);

//     for (i = 0; i < n; ++i)
//     {
//         for (j = i + 1; j < n; ++j)
//         {
//             if (number[i] < number[j])
//             {
//                 a = number[i];
//                 number[i] = number[j];
//                 number[j] = a;
//             }
//         }
//     }
//     for (i = 0; i < n; ++i)
//     {
//         printf("%d\n", number[i]);
//     }
//     return 0;
// }
// void main()
// {
//     //variable declaration
//     int number[30];
//     int i, j, a, n;

//     //asking user to enter size of array
//     printf("Enter the value of N\n");
//     scanf("%d", &n); //reading array size

//     //asking user to enter array elements
//     printf("Enter the numbers \n");
//     for (i = 0; i < n; ++i)
//         scanf("%d", &number[i]); //reading array elements

//     /* Logic for sorting and checking */

//     for (i = 0; i < n; ++i)
//     {
//         for (j = i + 1; j < n; ++j)
//         {
//             if (number[i] < number[j])
//             {
//                 a = number[i];
//                 number[i] = number[j];
//                 number[j] = a;
//             }
//         }
//     }

//     printf("The numbers arranged in descending order are given below\n");
//     for (i = 0; i < n; ++i)
//     {
//         printf("%d\n", number[i]); //printing numbers in descending order
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n, rev = 0, remainder;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         remainder = n % 10;
//         rev = rev * 10 + remainder;
//         n /= 10;
//     }
//     printf("Reversed number = %d", rev);
//     return 0;
// }
//1095
// #include <stdio.h>
// int main()
// {
//     int i, j = 60;

//     for (i = 1; i <= 37; i += 3)
//     {

//         printf("I=%d J=%d", i, j);
//         j -= 5;
//         printf("\n");
//     }
//     return 0;
// }
//1096
// #include <stdio.h>
// int main()
// {
//     int i, j;

//     for (i = 1; i <= 9; i += 2)
//     {
//         for (j = 7; j >= 5; j--)
//         {
//             printf("I=%d J=%d\n", i, j);
//         }
//     }
//     return 0;
// }
// 1097
// #include <stdio.h>
// int main()
// {
//     int i, j, k = 7;

//     for (i = 1; i < 10; i += 2)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("I=%d J=%d\n", i, k);
//             k--;
//         }
//         k += 5;
//     }
//     return 0;
// }
// 1098
// #include <stdio.h>
// int main()
// {
//     float i, j;
//     int a, b;
//     for (i = 0.0; i < 2.1; i += 0.2)
//     {
//         for (j = 1.0; j <= 3.0; j++)
//         {
//             if (i > 0 && i < 1 || i > 1 && i < 2)
//             {
//                 printf("I=%.1f  h J=%.1f\n", i, i + j);
//             }
//             else
//             {
//                 a = i;
//                 b = i + j;
//                 printf("I=%d J=%d\n", a, b);
//             }
//         }
//     }
//     return 0;
// }
//1182
// #include <stdio.h>
// int main()
// {
//     float arr[12][12];
//     int i, j;
//     float n;
//     int col;
//     char ch;
//     scanf("%d %c", &col, &ch);
//     for (i = 0; i < 12; i++)
//     {
//         for (j = 0; j < 12; j++)
//         {
//             scanf("%f", &n);
//             arr[i][j] = n;
//         }
//     }
//     float sum = 0, avg;
//     for (i = 0; i < 12; i++)
//     {
//         sum = sum + arr[i][col];
//     }
//     avg = (float)sum / 12.0;
//     if (ch == 'S')
//     {
//         printf("%.1f\n", sum);
//     }
//     else
//     {
//         printf("%.1f\n", avg);
//     }
//     return 0;
// }
//1037
// #include <stdio.h>

// int main()

// {

//     float n;

//     scanf("%f", &n); //take value from the user

//     if (n < 0 || n > 100)
//     { //implementing the above logic

//         printf("Fora de intervalo\n");
//     }
//     else
//     {

//         if (n >= 0 && n <= 25)
//         {

//             printf("Intervalo [0,25]\n");
//         }
//         else if (n > 25 && n <= 50)
//         {

//             printf("Intervalo (25,50]\n");
//         }
//         else if (n > 50 && n <= 75)
//         {

//             printf("Intervalo (50,75]\n");
//         }
//         else
//         {

//             printf("Intervalo (75,100]\n");
//         }
//     }

//     return 0;
// }
//1038
// #include <stdio.h>
// int main()
// {
//     int X, Y;
//     float snack;
//     scanf("%d %d", &X, &Y);
//     float ar[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
//     snack = ar[X - 1] * Y;
//     printf("Total: R$ %.2f\n", snack);
//     return 0;
// }
//1040
// #include <stdio.h>
// int main()
// {
//     float a, b, c, d, e;
//     double avg1, avg2;

//     scanf("%f %f %f %f", &a, &b, &c, &d);
//     avg1 = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
//     printf("Media: %.1lf\n", avg1);
//     if (avg1 >= 7.0)
//         printf("Aluno aprovado.\n");
//     else if (avg1 < 5.0)
//         printf("Aluno reprovado.\n");
//     else
//     {
//         printf("Aluno em exame.\n");
//         scanf("%f", &e);
//         printf("Nota do exame: %.1lf\n", e);
//         avg2 = (avg1 + e) / 2;
//         if (avg2 >= 5.0)
//             printf("Aluno aprovado.\n");
//         else
//             printf("Aluno reprovado.\n");
//         printf("Media final: %.1lf\n", avg2);
//     }

//     return 0;
// }
//1041
// #include <stdio.h>

// int main()
// {
//     float x, y;
//     scanf("%f %f", &x, &y);
//     if (x == 0.0)
//     {
//         if (y == 0.0)
//             printf("Origem\n");
//         else
//             printf("Eixo Y\n");
//     }
//     else if (y == 0.0)
//     {
//         if (x == 0.0)
//             printf("Origem\n");
//         else
//             printf("Eixo X\n");
//     }
//     else if (x > 0.0 && y > 0.0)
//         printf("Q1\n");
//     else if (x < 0.0 && y > 0.0)
//         printf("Q2\n");
//     else if (x < 0.0 && y < 0.0)
//         printf("Q3\n");
//     else if (x > 0.0 && y < 0.0)
//         printf("Q4\n");

//     return 0;
// }
//1042
// #include <stdio.h>
// int main()
// {
//     int a, b, c, temp, i, j, k;
//     scanf("%d %d %d", &a, &b, &c);
//     i = a;
//     j = b;
//     k = c;
//     if (a > b)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     if (a > c)
//     {
//         temp = a;
//         a = c;
//         c = temp;
//     }
//     if (b > c)
//     {
//         temp = b;
//         b = c;
//         c = temp;
//     }
//     printf("%d\n%d\n%d\n\n", a, b, c);
//     printf("%d\n%d\n%d\n", i, j, k);
//     return 0;
// }
//1043
// #include <stdio.h>
// int main()
// {
//     float A, B, C;
//     scanf("%f %f %f", &A, &B, &C);
//     if (A + B > C && B + C > A && A + C > B)
//     {
//         printf("Perimetro = %.1f\n", A + B + C);
//     }
//     else
//         printf("Area = %.1f\n", ((A + B) * C) / 2);
//     return 0;
// }
//1044
// #include <stdio.h>
// int main()
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if (B % A == 0 || A % B == 0)
//         printf("Sao Multiplos\n");
//     else
//         printf("Nao sao Multiplos\n");
//     return 0;
// }
//1045
// #include <stdio.h>
// int main()
// {
//     double a, b, c, i, j, k, temp;
//     scanf("%lf %lf %lf", &a, &b, &c);
//     if (a < b)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     if (a < c)
//     {
//         temp = a;
//         a = c;
//         c = temp;
//     }
//     if (b < c)
//     {
//         temp = b;
//         b = c;
//         c = temp;
//     }
//     i = a * a;
//     j = b * b;
//     k = c * c;
//     if (a >= b + c)
//         printf("NAO FORMA TRIANGULO\n");
//     else
//     {
//         if (i == j + k)
//             printf("TRIANGULO RETANGULO\n");
//         if (i > j + k)
//             printf("TRIANGULO OBTUSANGULO\n");
//         if (i < j + k)
//             printf("TRIANGULO ACUTANGULO\n");
//         if (a == b && b == c)
//             printf("TRIANGULO EQUILATERO\n");
//         else if (a == b || b == c || c == a)
//             printf("TRIANGULO ISOSCELES\n");
//     }

//     return 0;
// }
//1046
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a == b)
//         printf("O JOGO DUROU 24 HORA(S)\n");
//     else if (b > a)
//         printf("O JOGO DUROU %d HORA(S)\n", b - a);
//     else if (a > b)
//         printf("O JOGO DUROU %d HORA(S)\n", (b + 24) - a);
//     return 0;
// }
//1047
// #include <stdio.h>
// int main()
// {
//     int s_h, s_m, e_h, e_m;
//     scanf("%d %d %d %d", &s_h, &s_m, &e_h, &e_m);
//     if (e_m < s_m)
//     {
//         e_m += 60;
//         e_h -= 1;
//         e_m -= s_m;
//         if (e_h < s_h)
//         {
//             e_h += 24;
//             e_h -= s_h;
//         }
//         else
//         {
//             e_h -= s_h;
//         }
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", e_h, e_m);
//     }
//     else if (s_h == e_h && s_m == e_m)
//         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
//     else if (e_m > s_m)
//     {
//         e_m -= s_m;
//         if (e_h < s_h)
//         {
//             e_h += 24;
//             e_h -= s_h;
//         }
//         else
//         {
//             e_h -= s_h;
//         }
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", e_h, e_m);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int s_hr, s_min, e_hr, e_min, d_hr, d_min;
//     scanf("%d %d %d %d", &s_hr, &s_min, &e_hr, &e_min);
//     d_hr = e_hr - s_hr;
//     if (d_hr < 0)
//     {
//         d_hr = 24 + d_hr;
//     }
//     d_min = e_min - s_min;
//     if (d_min < 0)
//     {
//         d_min = 60 + d_min;
//         d_hr--;
//         if (d_hr < 0)
//         {
//             d_hr = 24 + d_hr;
//         }
//     }
//     if (d_hr == 0 && d_min == 0)
//     {
//         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
//     }
//     else
//     {
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d_hr, d_min);
//     }
//     return 0;
// }
//1048
// #include <stdio.h>
// int main()
// {

//     float a, slary, b;
//     int p;
//     char c = '%';
//     scanf("%f", &a);
//     if (a >= 0.00 && a <= 400.00)
//     {
//         b = (a * 15) / 100;
//         slary = a + b;
//         p = 15;
//     }
//     else if (a > 400.00 && a <= 800.00)
//     {
//         b = (a * 12) / 100;
//         slary = a + b;
//         p = 12;
//     }
//     else if (a > 800.00 && a <= 1200.00)
//     {
//         b = (a * 10) / 100;
//         slary = a + b;
//         p = 10;
//     }
//     else if (a > 1200.00 && a <= 2000.00)
//     {
//         b = (a * 7) / 100;
//         slary = a + b;
//         p = 7;
//     }
//     else if (a > 2000.00)
//     {
//         b = (a * 4) / 100;
//         slary = a + b;
//         p = 4;
//     }
//     printf("Novo salario: %.2f\n", slary);
//     printf("Reajuste ganho: %.2f\n", b);
//     printf("Em percentual: %d %c\n", p, c);

//     return 0;
// }
//1083
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int spy = 0;
//     float number = 0;
//     float sum = 0.0;
//     int element = 0;
//     char oparation;
//     scanf("%c", &oparation);
//     for (i = 0; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             scanf("%f", &number);
//             if (j > spy)
//             {
//                 sum += number;
//                 element++;
//             }
//         }
//         spy++;
//     }
//     if (oparation == 'S')
//     {
//         printf("%.1f\n", sum);
//     }
//     else
//     {
//         printf("%.1f\n", sum / element);
//     }

//     return 0;
// }
//1084
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int spy = 0;
//     float number = 0;
//     float sum = 0.0;
//     int element = 0;
//     char oparation;
//     scanf("%c", &oparation);
//     for (i = 0; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             scanf("%f", &number);
//             if (i > 0 && j < spy)
//             {
//                 sum += number;
//                 element++;
//             }
//         }
//         spy++;
//     }
//     if (oparation == 'S')
//     {
//         printf("%.1f\n", sum);
//     }
//     else
//     {
//         printf("%.1f\n", sum / element);
//     }

//     return 0;
// }
//1085
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int spy = 10;
//     float number = 0;
//     float sum = 0.0;
//     int element = 0;
//     char oparation;
//     scanf("%c", &oparation);
//     for (i = 0; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             scanf("%f", &number);
//             if (j <= spy)
//             {
//                 sum += number;
//                 element++;
//             }
//         }
//         spy--;
//     }
//     if (oparation == 'S')
//     {
//         printf("%.1f\n", sum);
//     }
//     else
//     {
//         printf("%.1f\n", sum / element);
//     }

//     return 0;
// }
//1086
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int spy = 11;
//     float number = 0;
//     float sum = 0.0;
//     int element = 0;
//     char oparation;
//     scanf("%c", &oparation);
//     for (i = 0; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             scanf("%f", &number);
//             if (i > 0 && j > spy)
//             {
//                 sum += number;
//                 element++;
//             }
//         }
//         spy--;
//     }
//     if (oparation == 'S')
//     {
//         printf("%.1f\n", sum);
//     }
//     else
//     {
//         printf("%.1f\n", sum / element);
//     }

//     return 0;
// }
//1187
// #include <stdio.h>
// int main()
// {
//     double N[12][12], sum = 0;
//     char oparetion;
//     int i, j, n = 1, m = 10;
//     scanf("%c", &oparetion);
//     for (i = 0; i < 12; i++)
//     {
//         for (j = 0; j < 12; j++)
//             scanf("%lf", &N[i][j]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         for (j = n; j <= m; j++)
//         {
//             sum += N[i][j];
//         }
//         n++;
//         m--;
//     }

//     if (oparetion == 'S')
//         printf("%.1lf\n", sum);
//     else
//         printf("%.1lf\n", sum / 30.0);
//     return 0;
// }
//1188
// #include <stdio.h>
// int main()
// {
//     double N[12][12], sum = 0;
//     char oparetion;
//     int i, j, n = 5, m = 6;
//     scanf("%c", &oparetion);
//     for (i = 0; i < 12; i++)
//     {
//         for (j = 0; j < 12; j++)
//             scanf("%lf", &N[i][j]);
//     }
//     for (i = 7; i < 12; i++)
//     {
//         for (j = n; j <= m; j++)
//         {
//             sum += N[i][j];
//         }
//         n--;
//         m++;
//     }

//     if (oparetion == 'S')
//         printf("%.1lf\n", sum);
//     else
//         printf("%.1lf\n", sum / 30.0);
//     return 0;
// }
//1189
// #include <stdio.h>
// int main()
// {
//     double N[12][12], sum = 0, count;
//     char oparetion;
//     int i, j, n = 1, m = 10;
//     scanf("%c", &oparetion);
//     for (i = 0; i < 12; i++)
//     {
//         for (j = 0; j < 12; j++)
//             scanf("%lf", &N[i][j]);
//     }
//     for (i = 0; i < 12; i++)
//     {
//         for (j = 0; j < 12; j++)
//         {
//             if (j < i && j < 11 - i)
//             {
//                 sum += N[i][j];
//                 count++;
//             }
//         }
//     }

//     if (oparetion == 'S')
//         printf("%.1lf\n", sum);
//     else
//         printf("%.1lf\n", sum / 30.0);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, count = 0, m = 0;
//     double a[12][12], sum = 0;
//     char o;
//     scanf("%c", &o);
//     for (i = 0; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             scanf("%lf", &a[i][j]);
//         }
//     }
//     for (i = 1; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             if (j <= m)
//             {
//                 sum += a[i][j]; // 1 [0], 2 [0,1], 3 [0,1,2] ,4 [0,1,2,3] 5 [0,1,2,3,4]
//                 count++;        // 1 [0], 2 [0,1], 3 [0,1,2] ,4 [0,1,2,3] 5 [0,1,2,3,4,5]
//             }
//         }

//         if (i < 5) // 1  afeter 2 , 2 after  3 , 3 after 4 , 4 after 5
//             m++;
//         else if (i >= 6)
//             m--; // 6 after 4 , 7 after 3 , 8 after 2 , 9 after 1 , 10 after 0
//     }
//     if (o == 'S')
//         printf("%.1lf\n", sum);
//     else
//         printf("%.1lf\n", sum / count);

//     return 0;
// }
//1190
// #include <stdio.h>
// int main()
// {
//     int i, j, count = 0, m = 0;
//     double a[12][12], sum = 0;
//     char o;
//     scanf("%c", &o);
//     for (i = 0; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             scanf("%lf", &a[i][j]);
//         }
//     }
//     for (i = 1; i <= 11; i++)
//     {
//         for (j = 0; j <= 11; j++)
//         {
//             if (j > i && j > 11 - i)
//             {
//                 sum += a[i][j];
//                 count++;
//             }
//         }
//     }
//     if (o == 'S')
//         printf("%.1lf\n", sum);
//     else
//         printf("%.1lf\n", sum / count);

//     return 0;
// }
//1149
// #include <stdio.h>
// int main()
// {
//     char a[15], b[15], c[15];
//     scanf("%s", a);
//     scanf("%s", b);
//     scanf("%s", c);

//     if (a[0] == 'v')
//     {
//         if (b[0] == 'a')
//         {
//             if (c[0] == 'c')
//             {
//                 printf("aguia\n");
//             }
//             else
//             {
//                 printf("pomba\n");
//             }
//         }
//         else
//         {
//             if (c[0] == 'o')
//             {
//                 printf("homem\n");
//             }
//             else
//             {
//                 printf("vaca\n");
//             }
//         }
//     }
//     else
//     {
//         if (b[0] == 'i')
//         {
//             if (c[2] == 'm')
//             {
//                 printf("pulga\n");
//             }
//             else
//             {
//                 printf("lagarta\n");
//             }
//         }
//         else
//         {
//             if (c[0] == 'h')
//             {
//                 printf("sanguessuga\n");
//             }
//             else
//             {
//                 printf("minhoca\n");
//             }
//         }
//     }

//     return 0;
// }
//1150
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n == 61)
//     {
//         printf("Brasilia\n");
//     }
//     else if (n == 71)
//     {
//         printf("Salvador\n");
//     }
//     else if (n == 11)
//     {
//         printf("Sao Paulo\n");
//     }
//     else if (n == 21)
//     {
//         printf("Rio de Janeiro\n");
//     }
//     else if (n == 32)
//     {
//         printf("Juiz de Fora\n");
//     }
//     else if (n == 19)
//     {
//         printf("Campinas\n");
//     }
//     else if (n == 27)
//     {
//         printf("Vitoria\n");
//     }
//     else if (n == 31)
//     {
//         printf("Belo Horizonte\n");
//     }
//     else
//     {
//         printf("DDD nao cadastrado\n");
//     }

//     return 0;
// }
//1051
// #include <stdio.h>
// int main()
// {
//     float n;
//     scanf("%f", &n);
//     if (n >= 0.00 && n <= 2000.00)
//         printf("Isento\n");
//     else if (n > 2000.00 && n <= 3000.00)
//     {
//         n = n - 2000.00;
//         n = (n * 8) / 100;
//         printf("R$ %.2f\n", n);
//     }
//     else if (n > 3000.00 && n <= 4500.00)
//     {
//         n = n - 3000.00;
//         n = (n * 18) / 100;
//         printf("R$ %.2f\n", n + 80);
//     }
//     else if (n > 4500.00)
//     {
//         n = n - 4500.00;
//         n = (n * 28) / 100;
//         printf("R$ %.2f\n", n + 80 + 270);
//     }
//     return 0;
// }
//1052
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n == 1)
//         printf("January\n");
//     if (n == 2)
//         printf("February\n");
//     if (n == 3)
//         printf("March\n");
//     if (n == 4)
//         printf("April\n");
//     if (n == 5)
//         printf("May\n");
//     if (n == 6)
//         printf("June\n");
//     if (n == 7)
//         printf("July\n");
//     if (n == 8)
//         printf("August\n");
//     if (n == 9)
//         printf("September\n");
//     if (n == 10)
//         printf("October\n");
//     if (n == 11)
//         printf("November\n");
//     if (n == 12)
//         printf("December\n");
//     return 0;
// }
// //1059
// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 2; i <= 100; i += 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }
//1060
// #include <stdio.h>
// int main()
// {
//     int i, n = 0;
//     float a;
//     for (i = 0; i < 6; i++)
//     {
//         scanf("%f", &a);
//         if (a >= 0)
//             n++;
//     }
//     printf("%d valores positivos\n", n);
//     return 0;
// }
//
//1061
// #include <stdio.h>
// int main()
// {
//     int N, d1, d2, h1, h2, m1, m2, s1, s2, ds1, ds2, day, hr, min, sec;
//     scanf("%*s %d", &d1);
//     scanf("%d %*s", &h1);
//     scanf("%d %*s", &m1);
//     scanf("%d", &s1);
//     scanf("%*s %d", &d2);
//     scanf("%d %*s", &h2);
//     scanf("%d %*s", &m2);
//     scanf("%d", &s2);
//     ds1 = s1 + (m1 * 60) + (h1 * (60 * 60)) + (d1 * (24 * 60 * 60));
//     ds2 = s2 + (m2 * 60) + (h2 * (60 * 60)) + (d2 * (24 * 60 * 60));
//     N = ds2 - ds1;
//     day = N / 86400;
//     N = N % 86400;
//     hr = N / 3600;
//     N = N % 3600;
//     min = N / 60;
//     sec = N % 60;

//     printf("%d dia(s)\n", day);
//     printf("%d hora(s)\n", hr);
//     printf("%d minuto(s)\n", min);
//     printf("%d segundo(s)\n", sec);
//     return 0;
// }
//1064
// #include <stdio.h>

// int main()
// {
//     int i, n = 0, x;
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &x);
//         if (x % 2 == 0)
//             n++;
//     }
//     printf("%d valores pares\n", n);
//     return 0;
// }
//1066
// #include <stdio.h>

// int main()
// {
//     int i, p = 0, n = 0, e = 0, o = 0, x;
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &x);
//         if (x % 2 == 0)
//             e++;
//         else
//             o++;
//         if (x > 0)
//             p++;
//         else if (x < 0)
//             n++;
//     }
//     printf("%d valor(es) par(es)\n", e);
//     printf("%d valor(es) impar(es)\n", o);
//     printf("%d valor(es) positivo(s)\n", p);
//     printf("%d valor(es) negativo(s)\n", n);
//     return 0;
// }
//1067
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i = i + 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }
//1070
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         n++;
//     for (i = 0; i < 6; i++)
//     {
//         printf("%d\n", n);
//         n += 2;
//     }
//     return 0;
// }
//1071
// #include <stdio.h>

// int main()
// {
//     int i, a, b, s = 0;
//     scanf("%d %d", &a, &b);
//     if (a > b)
//     {
//         a = a + b;
//         b = a - b;
//         a = a - b;
//     }
//     if (a % 2 == 0)
//         a--;
//     a = a + 2;
//     for (i = a; i < b; i = i + 2)
//     {
//         s = s + i;
//     }
//     printf("%d\n", s);

//     return 0;
// }
//1072
// #include <stdio.h>
// int main()
// {
//     int t, i, a = 0, b = 0, n;
//     scanf("%d", &t);
//     for (i = 0; i < t; i++)
//     {
//         scanf("%d", &n);
//         if (n >= 10 && n <= 20)
//             a++;
//         else
//             b++;
//     }
//     printf("%d in\n", a);
//     printf("%d out\n", b);
//     return 0;
// }
//1073
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     for (i = 2; i <= n; i += 2)
//     {
//         printf("%d^2 = %d\n", i, i * i);
//     }

//     return 0;
// }
//1074
// #include <stdio.h>
// int main()
// {
//     int t, n, i;
//     scanf("%d", &t);
//     for (i = 0; i < t; i++)
//     {
//         scanf("%d", &n);
//         if (n == 0)
//             printf("NULL\n");
//         else if (n > 0)
//         {
//             if (n % 2 == 0)
//                 printf("EVEN POSITIVE\n");
//             else
//                 printf("ODD POSITIVE\n");
//         }
//         else if (n < 0)
//         {
//             if (n % 2 == 0)
//                 printf("EVEN NEGATIVE\n");
//             else
//                 printf("ODD NEGATIVE\n");
//         }
//     }

//     return 0;
// }
//1075
// #include <stdio.h>

// int main()
// {
//     int n, i;
//     scanf("%d", &n);
//     for (i = 1; i < 10000; i++)
//     {
//         if (i % n == 2)
//             printf("%d\n", i);
//     }

//     return 0;
// }
//1078
// #include <stdio.h>

// int main()
// {
//     int i, N;
//     scanf("%d", &N);
//     for (i = 1; i < 11; i++)
//     {
//         printf("%d x %d = %d\n", i, N, N * i);
//     }

//     return 0;
// }
//1079
// #include <stdio.h>

// int main()
// {
//     int n, i;
//     float a, b, c, total;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%f %f %f", &a, &b, &c);
//         total = a * 2.0 + b * 3.0 + c * 5.0;
//         printf("%.1f\n", total / 10.0);
//     }
//     return 0;
// }
//1080
// #include <stdio.h>

// int main()
// {
//     int i, n, p = 0, j = 0;
//     for (i = 1; i <= 100; i++)
//     {
//         scanf("%d", &n);
//         if (n > j)
//         {
//             j = n;
//             p = i;
//         }
//     }
//     printf("%d\n%d\n", j, p);

//     return 0;
// }
//1094
// #include <stdio.h>

// int main()
// {
//     int n, i, C = 0, R = 0, S = 0, a, t;
//     char b, x = '%';
//     double p, q, r;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d %c", &a, &b);
//         if (b == 'C')
//             C = C + a;
//         else if (b == 'R')
//             R = R + a;
//         else if (b == 'S')
//             S = S + a;
//     }
//     t = R + C + S;
//     p = (C * 100.00) / t;
//     q = (R * 100.00) / t;
//     r = (S * 100.00) / t;
//     printf("Total: %d cobaias\n", t);
//     printf("Total de coelhos: %d\n", C);
//     printf("Total de ratos: %d\n", R);
//     printf("Total de sapos: %d\n", S);
//     printf("Percentual de coelhos: %.2f %c\n", p, x);
//     printf("Percentual de ratos: %.2f %c\n", q, x);
//     printf("Percentual de sapos: %.2f %c\n", r, x);

//     return 0;
// }
//1099
// #include <stdio.h>

// int main()
// {
//     int a, j, b, i, k, n, x = 0;
//     scanf("%d", &n);
//     int ar[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d %d", &a, &b);
//         if (a > b)
//         {
//             a = a + b;
//             b = a - b;
//             a = a - b;
//         }
//         if (a % 2 == 0)
//             a--;
//         a = a + 2;
//         for (j = a; j < b; j = j + 2)
//         {
//             x = x + j;
//         }
//         ar[i] = x;
//         x = 0;
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\n", ar[i]);
//     }

//     return 0;
// }
//1101
// #include <stdio.h>

// int main()
// {
//     int i, j, M, N, x = 0, c;
//     for (i = 0; i < 100; i++)
//     {
//         scanf("%d %d", &M, &N);
//         if (M <= 0 || N <= 0)
//             break;
//         if (M > N)
//         {
//             c = M;
//             M = N;
//             N = c;
//         }
//         for (j = M; j <= N; j++)
//         {
//             printf("%d ", j);
//             x = x + j;
//         }
//         printf("Sum=%d\n", x);
//         x = 0;
//     }

//     return 0;
// }
//1113
// #include <stdio.h>

// int main()
// {
//     int i, X, Y;
//     for (i = 0; i < 100; i++)
//     {
//         scanf("%d %d", &X, &Y);
//         if (X == Y)
//             break;
//         if (X > Y)
//             printf("Decrescente\n");
//         else
//             printf("Crescente\n");
//     }

//     return 0;
// }
//1114
// #include <stdio.h>

// int main()
// {
//     int i, X;
//     for (i = 0; i < 100; i++)
//     {
//         scanf("%d", &X);
//         if (X == 2002)
//             printf("Acesso Permitido\n");
//         else
//             printf("Senha Invalida\n");
//         if (X == 2002)
//             break;
//     }

//     return 0;
// }
//1115
// #include <stdio.h>

// int main()
// {
//     int a, b, i;
//     for (i = 0; i < 100; i++)
//     {
//         scanf("%d %d", &a, &b);
//         if (a == 0 || b == 0)
//             break;
//         else if (a > 0 && b > 0)
//             printf("primeiro\n");
//         else if (a < 0 && b > 0)
//             printf("segundo\n");
//         else if (a < 0 && b < 0)
//             printf("terceiro\n");
//         else if (a > 0 && b < 0)
//             printf("quarto\n");
//     }

//     return 0;
// }
//1116
// #include <stdio.h>
// int main()
// {
//     int t;
//     float a, b;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%f %f", &a, &b);
//         if (b == 0)
//         {
//             printf("divisao impossivel\n");
//         }
//         else
//         {
//             printf("%.1f\n", a / b);
//         }
//     }

//     return 0;
// }
//1117
// #include <stdio.h>

// int main()
// {
//     int i, j = 0;
//     float n, avg, ar[2];
//     for (i = 0; i < 100; i++)
//     {
//         scanf("%f", &n);
//         if (n >= 0 && n <= 10)
//         {
//             ar[j] = n;
//             j++;
//         }
//         else
//             printf("nota invalida\n");
//         if (j > 1)
//             break;
//     }
//     avg = (ar[0] + ar[1]) / 2;
//     printf("media = %.2f\n", avg);

//     return 0;
// }//1118
// #include <stdio.h>

// int main()
// {
//     int X, l, m, j;
//     float n, i, a, b, c, d, o, avg, avg1, ar[2], br[2];
//     while (1)
//     {
//         j = 0;
//         for (i = 0; i < 100; i++)
//         {
//             scanf("%f", &n);
//             if (n >= 0 && n <= 10)
//             {
//                 ar[j] = n;
//                 j++;
//             }
//             else
//                 printf("nota invalida\n");
//             if (j == 2)
//             {
//                 avg = (ar[0] + ar[1]) / 2;
//                 printf("media = %.2f\n", avg);
//                 break;
//             }
//         }
//         for (l = 0; l < 100; l++)
//         {
//             scanf("%d", &X);
//             printf("novo calculo (1-sim 2-nao)\n");
//             if (X == 1 || X == 2)
//                 break;
//         }
//         if (X == 1)
//             continue;
//         else if (X == 2)
//             break;
//     }

//     return 0;
// }
//1131
// #include <stdio.h>

// int main()
// {
//     int i, a, b, ab, j = 0, k, l, n, x = 0, y = 0, z = 0;
//     while (1)
//     {
//         scanf("%f %f", &k, &l);
//         printf("Novo grenal (1-sim 2-nao)\n");
//         j++;
//         if (k > l)
//             x++;
//         else
//             y++;
//         if (k == l)
//             z++;
//         scanf("%d", &n);
//         if (n == 1)
//             continue;
//         if (n == 2)
//             break;
//     }
//     printf("%d grenais\n", j);
//     printf("Inter:%d\n", x);
//     printf("Gremio:%d\n", y);
//     printf("Empates:%d\n", z);
//     if (x > y)
//         printf("Inter venceu mais\n");
//     else if (y > x)
//         printf("Gremio venceu mais\n");
//     else
//         printf("Não houve vencedor\n");

//     return 0;
// }
//1132
// #include <stdio.h>

// int main()
// {
//     int a, b, c = 0, i, temp;
//     scanf("%d %d", &a, &b);
//     if (a > b)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     for (i = a; i <= b; i++)
//     {
//         if (i % 13 != 0)
//             c += i;
//     }
//     printf("%d\n", c);

//     return 0;
// }
//1133
// #include <stdio.h>

// int main()
// {
//     int a, b, i, temp;
//     scanf("%d %d", &a, &b);
//     if (a > b)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     a++;
//     for (i = a; i < b; i++)
//     {
//         if (i % 5 == 2 || i % 5 == 3)
//             printf("%d\n", i);
//     }

//     return 0;
// }
//1134
// #include <stdio.h>

// int main()
// {
//     int a, b = 0, c = 0, d = 0, e, i;
//     printf("MUITO OBRIGADO\n");
//     for (i = 0; i < 100; i++)
//     {
//         scanf("%d", &a);
//         if (a >= 1 && a <= 3)
//         {
//             if (a == 1)
//                 b++;
//             else if (a == 2)
//                 c++;
//             else if (a == 3)
//                 d++;
//         }
//         else if (a == 4)
//             break;
//     }
//     printf("Alcool: %d\n", b);
//     printf("Gasolina: %d\n", c);
//     printf("Diesel: %d\n", d);

//     return 0;
// }
//1142
// #include <stdio.h>

// int main()
// {
//     int n, i, j = 1, k = 2, l = 3;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("%d %d %d PUM\n", j, k, l);
//         j += 4;
//         k += 4;
//         l += 4;
//     }

//     return 0;
// }
//1143
// #include <stdio.h>

// int main()
// {
//     int n, i, j = 1, k = 2, l = 3;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d %d %d\n", i, (i * i), (i * i * i));
//     }

//     return 0;
// }
//1144
// #include <stdio.h>

// int main()
// {
//     int n, i, j = 1, k = 2, l = 3;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d %d %d\n", i, (i * i), (i * i * i));
//         printf("%d %d %d\n", i, (i * i) + 1, (i * i * i) + 1);
//     }

//     return 0;
// }
//1145
// #include <stdio.h>

// int main()
// {
//     int n, a, i, j, k, l, m = 1;
//     scanf("%d %d", &a, &n);
//     k = n / a;
//     l = a;
//     for (i = 1; i <= k; i++)
//     {
//         printf("%d", m);
//         for (j = m + 1; j <= l; j++)
//         {
//             printf(" %d", j);
//         }
//         printf("\n");
//         m += a;
//         l += a;
//     }

//     return 0;
// }
//1146
// #include <stdio.h>

// int main()

// {

//     int i, j, k;

//     while (1)
//     {

//         scanf("%d", &j);

//         if (j == 0)
//             break;

//         printf("1");

//         for (k = 2; k <= j; k++)
//         {

//             printf(" %d", k);
//         }

//         printf("\n");
//     }

//     return 0;
// }
//1149
// #include <stdio.h>

// int main()

// {

//     int a, b, i, j = 0;

//     scanf("%d %d", &a, &b);

//     while (b < 0 || b == 0)
//         scanf("%d", &b);

//     for (i = 0; i < b; i++)
//     {

//         j = j + a + i;
//     }

//     printf("%d\n", j);

//     return 0;
// }
//1150
// #include <stdio.h>

// int main()

// {

//     int x, z, a = 1, c = 0, i;

//     scanf("%d %d", &x, &z);

//     while (x >= z)
//     {

//         scanf("%d", &z);
//     }

//     for (i = x; i < z; i++)
//     {

//         c += i; //3+4+5+6+7
//         // printf("%d\n", c);

//         if (c > z)
//             break;

//         a++;
//     }

//     printf("%d\n", a);

//     return 0;
// }
//1151
// #include <stdio.h>

// int main()

// {

//     int j, n, i, ar[1000];

//     scanf("%d", &n);

//     ar[0] = 0;

//     ar[1] = 1;

//     for (i = 2; i < n; i++)
//     {

//         ar[i] = ar[i - 2] + ar[i - 1];
//     }

//     printf("0");

//     for (j = 1; j < n; j++)
//     {

//         printf(" %d", ar[j]);
//     }

//     printf("\n");

//     return 0;
// }
//1153
// #include <stdio.h>

// int main()

// {

//     int n, i, a = 1;

//     scanf("%d", &n);

//     for (i = n; i >= 1; i--)
//     {

//         a = a * i;
//     }

//     printf("%d\n", a);

//     return 0;
// }
//1154
// #include <stdio.h>

// int main()

// {

//     int i = 0, j;

//     float b, a = 0;

//     while (1)
//     {

//         scanf("%d", &j);

//         if (j < 0)
//             break;

//         i = i + j;

//         a++;
//     }

//     b = i / a;

//     printf("%.2f\n", b);

//     return 0;
// }
//1155
// #include <stdio.h>

// int main()

// {

//     int i;

//     float S = 0, j = 1.0;

//     for (i = 1; i <= 100; i++)
//     {

//         S = S + (1 / j);

//         j++;
//     }

//     printf("%.2f\n", S);

//     return 0;
// }
//1156
// #include <stdio.h>

// int main()

// {

//     int i;

//     float S = 0, j = 1;

//     for (i = 1; i <= 39; i += 2)
//     {

//         S = S + (i / j);

//         j = j + j;
//     }

//     printf("%.2f\n", S);

//     return 0;
// }
//1157
// #include <stdio.h>

// int main()

// {

//     int N, i;

//     scanf("%d", &N);

//     for (i = 1; i <= N / 2; i++)
//     {

//         if (N % i == 0)
//             printf("%d\n", i);
//     }
//     printf("%d\n", N);
//     return 0;
// }
//1158
// #include <stdio.h>

// int main()

// {

//     int n, i = 1, j, k = 0, X, Y;

//     scanf("%d", &n);

//     for (i = 0; i < n; i++)
//     {

//         scanf("%d %d", &X, &Y);

//         if (X % 2 == 0)
//             X++;

//         for (j = 0; j < Y; j++)
//         {

//             k += X;

//             X += 2;
//             ;
//         }

//         printf("%d\n", k);

//         k = 0;
//     }

//     return 0;
// }
//1159
// #include <stdio.h>
// int main()
// {
//     int i, x, sum;
//     while (1)
//     {
//         sum = 0;
//         scanf("%d", &x);
//         if (x == 0)
//             break;
//         if (x % 2 != 0)
//             x++;
//         for (i = 0; i < 5; i++)
//         {
//             sum += x;
//             x += 2;
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }
//1160
// #include <stdio.h>

// int main()

// {

//     int i, PA, PB, j = 0, T;

//     double G1, G2;

//     scanf("%d", &T);

//     for (i = 0; i < T; i++)
//     {

//         j = 0;

//         scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

//         while (PA <= PB)
//         {

//             PA = PA + ((PA * G1) / 100);

//             PB = PB + ((PB * G2) / 100);

//             j++;

//             if (j > 100)
//             {

//                 printf("Mais de 1 seculo.\n");

//                 break;
//             }
//         }

//         if (j <= 100)
//             printf("%d anos.\n", j);
//     }

//     return 0;
// }
//1164
// #include <stdio.h>

// int main()

// {

//     int n, i, j, l, k = 0;

//     scanf("%d", &n);

//     for (i = 0; i < n; i++)
//     {

//         scanf("%d", &j);

//         for (l = 1; l < j; l++)
//         {

//             if (j % l == 0)
//                 k += l;
//         }

//         if (k == j)
//             printf("%d eh perfeito\n", j);

//         else
//             printf("%d nao eh perfeito\n", j);

//         k = 0;
//     }

//     return 0;
// }
//1165
// #include <stdio.h>

// int main()

// {

//     int i, j, X, N, k = 0, l;

//     scanf("%d", &N);

//     for (i = 0; i < N; i++)
//     {

//         scanf("%d", &X);

//         if (X == 1 || X == 2)
//             printf("%d eh primo\n", X);

//         else if (X > 2)
//         {
//             for (j = 2; j < X; j++)
//             {

//                 if (X % j == 0)
//                 {

//                     k = 2;

//                     break;
//                 }

//                 else
//                     k = 1;
//             }

//             if (k == 2)
//                 printf("%d nao eh primo\n", X);

//             else if (k == 1)
//                 printf("%d eh primo\n", X);
//         }
//     }

//     return 0;
// }
//1172
#include <stdio.h>

int main()

{
    printf("hamza");
    // int X[10], i, j;

    // for (i = 0; i < 10; i++)

    //     scanf("%d", &X[i]);

    // for (i = 0; i < 10; i++)

    //     if (X[i] <= 0)
    //         X[i] = 1;

    // for (i = 0; i < 10; i++)

    //     printf("X[%d] = %d\n", i, X[i]);

    return 0;
}