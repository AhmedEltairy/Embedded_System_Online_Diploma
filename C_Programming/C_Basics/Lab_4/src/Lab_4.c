/*
 ============================================================================
 Name        : Lab_4.c
 Author      : Ahmed Eltairy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int i,sum=0;
	for(i=0; i<100; i++)
		{
		sum+= i;
		};

	printf("summtion from 1 to 99 \n= %d ",sum );


	return EXIT_SUCCESS;
}
