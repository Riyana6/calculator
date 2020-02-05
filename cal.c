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
         float sum=(a+b);
         printf("\nSum of %f and %f is %f.",a,b,sum);
         break;

         case 2:
         printf("Subtraction\n");
         float a1,b1;
         printf("enter first number:");
         scanf("%f",&a1);
         printf("enter second number:");
         scanf("%f",&b1);
         float sub=(a1-b1);
         printf("\nDifference between %f and %f is %f.",a1,b1,sub);
         break;

         case 3:
         printf("Division\n");
         float a2,b2;
         printf("enter first number:");
         scanf("%f",&a2);
         printf("enter second number:");
         scanf("%f",&b2);
         float div=(a2/b2);
         printf("\nDivision of %f and %f is %f.",a2,b2,div);
         break;
        



        
     }
     return 0;
 }