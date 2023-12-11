/*
 ============================================================================
 Name        : Lab_5.c
 Author      : Ahmed Eltairy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int NumOfStudents;
	int i;
	float deg=0;
	float sum=0;
	float avg=0;

	printf("Please select the number of students to get average of degrees  \nnumber of students: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&NumOfStudents);

	for(i=0; i<NumOfStudents;i++ )
	{
		printf("Enter  the dergee of student number %d :", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &deg);
		sum +=deg;
	};

	avg = sum/NumOfStudents;

	printf("\nThe Avrage of Grades is %f ", avg);
	return EXIT_SUCCESS;
}
