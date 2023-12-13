/*
 ============================================================================
 Name        : Ex_6.c
 Author      : Ahmed Eltairy
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int n;
	int sum=0;

	printf("Enter Integer :");
	fflush(stdout);
	scanf("%d",  &n);

	for(i=0 ; i <= n; i++)
	{
	sum +=i;
	}

	printf("sum = %d ", sum);
}
