/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("enter a number:");
    scanf("%d" , &num);
    
    if (num > 0)
    {
        printf("&d is positive.\n",num);
    }
        else if (num<0){
            printf("&d is negative.\n", num);
        }
            else{
                printf("the number is zero.\n");
            }
        
    

    return 0;
}
