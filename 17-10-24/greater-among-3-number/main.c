/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d", &num2);
    printf("enter third number:");
    scanf("%d", &num3);
    
    if(num1>num2 && num1>num3)
    {
        printf("%d is greater ",num1);

    }
    else if(num2>num3)
    {
        printf("%d is greater",num2);

    }
    else
    {
        printf("%d is greater among %d,%d,%d",num3,num1,num2,num3);

    }
    
    

    return 0;
}
