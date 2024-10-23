/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char str[100];
  	int i, vowels, consonants;
  	i = vowels = consonants = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	while (str[i] != '\0')
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')  
		{
  			vowels++;  	
 		}
  		else
    		consonants++;
    	i++;
	}
    printf("\n Number of Vowels in this String = %d", vowels);  
	printf("\n Number of Consonants in this String = %d", consonants);   	
    return 0;
}
