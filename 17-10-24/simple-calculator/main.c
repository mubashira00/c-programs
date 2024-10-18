/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int choice,a,b,add,sub,mul,divition;
     printf("1.addition\n2.subtraction\n3.multiple\n4.divition\n");
     printf("enter 2 numbers:");
     scanf("%d%d",&a,&b);
     printf ("enter a coice:");
     scanf("%d",&choice);
     
     switch(choice)
     {
         case 1:
         add = a+b;
         printf("addition is %d",add);
         break;
         case 2:
         sub = a-b;
         printf("subtraction is %d",sub);
         break;
         case 3:
         mul = a*b;
         printf("multiple is %d",mul);
         break;
         divition = a/b;
         printf("divition is %d",divition);
         break;
         
         default:
         printf("invalid choice");
     }

    return 0;
}
