/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double base,exp,result;
    printf("enter a number:");
    scanf("%lf",&base);
     printf("enter a exponent:");
     scanf("%lf", &exp);
     result=pow(base,exp);
      printf("%.1lf^%.1lf = %.2lf",base,exp,result);
    return 0;
}