/*
 ============================================================================
 Name        : Ex_4.c
 Author      : Ahmed Eltairy
 Description : input +ve or -ve or 0
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;

	printf("Enter a number :\n");
	fflush(stdout);fflush(stdin);
	scanf("%d", &i);


	if(i>0)
		printf("%d is positive", i);
	else if (i==0)
		printf("the input is zero");
	else
		printf("%d is negative", i);

}
