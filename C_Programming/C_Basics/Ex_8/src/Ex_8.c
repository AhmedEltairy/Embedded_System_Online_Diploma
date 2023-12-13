/*
 ============================================================================
 Name        : Ex_8.c
 Author      : Ahmed Eltairy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;
	float i;
	float j;
	float calc;

	printf("Enter one of these operator   + - * / :\n");
	fflush(stdout);
	scanf("%c", &c);

	printf("Enter Two operands : \n");
	fflush(stdout);
	scanf("%f %f", &i  , &j);


	switch(c)
	{
	case '+':
		calc=i+j;
		printf("calc = %f", calc);
		break;

	case '/':
	{
		calc=i/j;
		printf("calc = %f", calc);
		break;
	}

	case '-':
		calc=i-j;
		printf("calc = %f", calc);
		break;

	case '*':
		calc=i*j;
		printf("calc = %f", calc);
		break;

	default:
		printf("Error !!! this is not operator");
		break;


	}




// if (c == '+')
// {
//	 calc=i+j;
//	 printf("calc = %f", calc);
// }
//
// else if (c == '*')
// {
//	 calc=i*j;
//	printf("calc = %f", calc);
// }
//
// else if (c == '/')
// {
//	 calc=i/j;
//	printf("calc = %f", calc);
// }
//
// else if (c == '-')
// {
//	 calc=i-j;
//	printf("calc = %f", calc);
// }
//
// else
//		printf("Error this is not operator");


	return 0;
}
