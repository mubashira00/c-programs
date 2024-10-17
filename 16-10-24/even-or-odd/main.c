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
	
	printf("enter the integer");
	
	scanf("%d", &num);

	if(num %2 == 0)
		printf("%d is an even number\n" , num);
	else
		printf("%d is an odd number\n" , num);

	return 0;
}
