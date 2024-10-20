/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n,r,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	
		while(n>0) 
		{
			r=n%10;
			rev=rev*10+r;
        	n/=10;
		}
		printf("the reverse number %d\n",rev);
		return 0;
	}
