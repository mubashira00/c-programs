/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
        printf("the factorial of %d is %d\n",n,fact);
    return 0;
}
