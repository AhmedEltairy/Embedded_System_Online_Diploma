/*
 ============================================================================
 Name        : Ex_5.c
 Author      : Ahmed Eltairy
 Description : check character or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	char c;
	printf("please enter character :");
	fflush(stdout);
	scanf("%c", &c);

	if (  ( c >= 'a' && c <='z') || ( c>'A' && c<'Z')  )
		{
		printf(" %c is character", c);
		}
	else
		printf(" %c is not character", c);
return 0;
}
