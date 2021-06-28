#include <stdio.h>


int main()
{
 int a, b, c;
 int small, medium, large;
 printf("Please Enter your number:\n");

 while(1){

     scanf ("%d %d %d", &a, &b, &c);
     
     if (a == b && b == c && c == a){
         break;
     }else if (a >= b && a >= c) {
         large = a;
         if (b > c) {
             medium = b;
             small = c;
         }else{
             medium = c;
             small = b;
         }
     }else if (b >= a && b >= c) {
         large = b;
         if (a > c) {
             medium = a;
             small = c;
         }else{
             medium = c;
             small = a;
         }
     }else if (c >= a && c >=b) {
         large = c;
         if (a > b) {
             medium = a;
             small = c;
         }else {
             medium = c;
             small = a;
         }
     }
     printf(" Your number is displayed in the descending order:\n %d %d %d", large, medium, small);
     
 }
    printf ("Finished");

    return 0;
}