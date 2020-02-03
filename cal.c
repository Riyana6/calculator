#include<stdio.h>
 int main(){
     printf("\tCALCULATOR\n");
     printf("========================\n");
     printf("press 1 to addition\n");
     printf("press 2 to subtraction\n");
     printf("press 3 to division\n");
     printf("press 4 to multipication\n");
     printf("========================\n\n");
     
     int n;
     printf("enter number:");
     scanf("%d",&n);
     switch (n)
     {
         case 1:
         printf("Addition\n");
         float a,b;
         printf("enter first number:");
         scanf("%f",&a);
         printf("enter second number:");
         scanf("%f",&b);
         float sum=(a+b)/2;
         printf("\nSum of %f and %f is %f.",a,b,sum);
         
     }
     return 0;
 }