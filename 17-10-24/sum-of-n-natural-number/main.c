/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    long long sum=0;
    printf("enter the positive integer N");
    scanf("%d" , &N);
    if (N<1)
    {
        printf("enter a positive integer greater than 0.\n");
        return 1;
    }
    for (int i=1; i<=N; i++)
    { sum +=i;
    }
    printf(" the sum of the first %d natrual numbers is: %lld\n", N,sum);

    return 0;
}
