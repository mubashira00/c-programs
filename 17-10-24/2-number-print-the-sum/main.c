/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("enter the first number");
    scanf("%d", &num1);
    printf("enter the second number");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("the sum of %d and %d is %d\n", num1 , num2, sum);
    return 0;
}