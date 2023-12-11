/*
 ============================================================================
 Name        : Lab_2.c
 Author      : Ahmed Eltairy
 Description : This program finds the largest value of the three given values.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a;
	int b;
	int c;

	printf("Enter three values to know the largest : \n");
	fflush(stdin); fflush (stdout);
	scanf("%d  %d  %d", &a, &b, &c);

	if (a<b)
	{
		if (b<c)
			printf("\n %d is the largest ", c);
		else
			printf("\n %d is the largest ", b);
	}

	else
	{
		if (a<c)
			printf("\n%d is the largest ", c);
		else
			printf("\n%d is the largest ", a);
	}
	return EXIT_SUCCESS;
}
