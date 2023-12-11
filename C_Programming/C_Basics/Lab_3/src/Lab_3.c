/*
 ============================================================================
 Name        : Lab_3.c
 Author      : Ahmed Eltairy
 Description : min. number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a,b, ans;

	printf("Enter to values to get the minimum \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a , &b);

	ans= (a<b) ? a : b ;

	printf(" the minimum is %d ", ans);
	return EXIT_SUCCESS;
}
