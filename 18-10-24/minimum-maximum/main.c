/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[8],i;
    int max,min;
    printf("enter 8 elements:\n");
    for(int i=0; i<8; i++)
    {
    scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    for(int i=0; i<8; i++)
    {
    if (arr[i]>max)
    {
        max=arr[i];
    }
    if(arr[i]<min)
    {
    min=arr[i];
}
}
    
    printf("maximum:%d\n",max);
    printf("minimum:%d\n",min);
    
    return 0;
    }

