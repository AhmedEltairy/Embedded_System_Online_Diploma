/*
 ============================================================================
 Name        : Ex_3.c
 Author      : Ahmed Eltairy
 Description : large number among 3 numbers
 ============================================================================
 */

#include    <stdio.h>
#include	<stdlib.h>

int main (void)
{
	int a,b,c;

	printf("Enter 3 number to get the largest : \n");
	fflush(stdout); fflush(stdin);
	scanf("%d %d %d", &a, &b, &c);

	if (a>b)
	{
		if (a>c)
			printf("%d is the largest number", a);
		else
			printf("%d is the largest number", c);
	}
	else
	{
		if (b>c)
					printf("%d is the largest number", b);
				else
					printf("%d is the largest number", c);
	}


return 0;
}
