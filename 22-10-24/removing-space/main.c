/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void removeSpace(char *str)
{
	char *result=str;
	while (*str)
	{
		if (*str != ' ')
		{
			*result++ = *str;

		}
		str++;

	}
	*result = '\0';
}

	int main()
	{
		char str[100];
		printf("enter a string:");
		fgets(str,sizeof(str),stdin);
		removeSpace(str);
		printf("string after removing space: %s\n",str);
	

	return 0;
}