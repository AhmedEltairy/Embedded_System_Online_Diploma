/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Ahmed Eltairy

 Description : In this program the user has to choose between calculating circle area
 	 or circlecircumference. The choice comes by taking a character from the keyboard using the (getche)function.
 	 If the user presses a character it proceeds with area calculation and printing.
 	 If theuser presses c character it proceeds with circumference calculation and printing.
 	 If the userpresses other letters the program prints an error message.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char choise;
	float area;
	float cir;
	float rad;

printf("Enter raduis \n");
fflush(stdin);	fflush(stdout);
scanf ("%f" , &rad);

printf("Enter A to calculate Area, C to calculate Circumference \n");
fflush(stdin);	fflush(stdout);
scanf (" %c" , &choise);
if ( choise  == 'A' || choise  == 'a')
{   	area = 3.14*rad*rad;
		printf ("Area is %f ", area );
}
else if (choise == 'c'|| choise  == 'C')
{
		cir = 2*3.14*rad;
		printf ("Circumfrance is %f ", cir );
}
else
			printf ("Wrong Choise" );
}
