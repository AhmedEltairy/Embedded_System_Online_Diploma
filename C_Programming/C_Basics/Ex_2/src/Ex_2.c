/*
 ============================================================================
 Name        : Ex_2.c
 Author      : Ahmed Eltairy
 Description : character is Vowel or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char alpha;

    printf("Enter the Alphabet you want to check : ");
    scanf(" %c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
        alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        printf("%c is a Vowel", alpha);
    }

    else
    {
        printf("%c is a Consonant", alpha);
    }

    return EXIT_SUCCESS;
}
