/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int i,n,p=0,m;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2; i<n; i++)
	{
		m=n%i;
		if(m==0)
			p=1;
	}
	if(p==0)
		printf("%d is a prime number\n",n);
	else
	{
		printf("%d is not a prime number\n",n);
	}
	return 0;
}
