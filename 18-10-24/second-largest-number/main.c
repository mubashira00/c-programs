/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int arr[9],i,first,second;
	printf("enter 9 elements:\n");
	for(i=0; i<9; i++)
	{
		scanf("%d",&arr[i]);

	}
	first=second=-1;
	for(i=0; i<9; i++)
	{
		if(arr[i]>first)
		{
			second=first;
			first=arr[i];

		}
		else if (arr[i]>second&& arr[i]<first) {
			second=arr[i];
		}
	}
	printf("second largest element: %d\n",second);
	return 0;
}
