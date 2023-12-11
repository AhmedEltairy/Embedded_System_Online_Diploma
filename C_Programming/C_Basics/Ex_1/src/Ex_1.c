/*
 ============================================================================
 Name        : Ex_1.c
 Author      : Ahmed Eltairy
 Description :check number even or odd.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;

	printf("Enter the integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &i);

	if (i%2 == 0)
		printf("%d is EVEN ", i );
	else
		printf("%d is ODD ", i );

//	(i%2==0)? printf("%d is Even",i) : printf("%d is odd",i);

	return EXIT_SUCCESS;
}
