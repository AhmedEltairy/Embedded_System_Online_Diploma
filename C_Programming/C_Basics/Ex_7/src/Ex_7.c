/*
 ============================================================================
 Name        : Ex_7.c
 Author      : Ahmed Eltairy
 Description : factorial for positive
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	int n;
	int fact=1;

	printf("Enter Integer :");
	fflush(stdout);
	scanf("%d",  &n);

	if (n>0)
	{
		for (i=1 ; i <=n; i++)
		{
			fact *=i;
		}
      printf("Factorial = %d", fact);
	}
	else
	{
		printf ("Error! \nFactorial of Negative number dosn't exist");
	}


	return EXIT_SUCCESS;
}
