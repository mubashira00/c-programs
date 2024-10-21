/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int primeOrNot(int num)
{
    if(num<=1)return 0;
    for(int i=2; i*i<=num; i++)
    {
    if(num%i==0) return 0;
}
return 1;
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(primeOrNot(n))
    {
        printf("%d is a prime number",n);
    }
      else
      {
          printf("%d is not a prime number",n);
      }

    return 0;
}
