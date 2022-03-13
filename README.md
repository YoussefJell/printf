# printf()

## Synopsis

This project represents a basic implementation of the printf().

## Description

_printf() is a function that do formatted printing to the standard output stream and returns the number of displayed characters.
It is a variadic function, that takes one fixed parameter which is a "const char * format", and multiple other variable parameters.

*Conversion specifiers*		*Argument/Parameter*		*Output format*
---------------------------------------------------------------------------------------------------------------
%c							Character.					Specifies a single-byte character.
%s 							Array of characters that	Specifies a single-byte or multi-byte character string.
							end with '\0'.
%i, %d  					Decimal integer.			Signed decimal integer.
---------------------------------------------------------------------------------------------------------------

## Usage

- All the files (*.c and main.h) have to be compiled on Ubuntu 14.04 LTS.
- Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c main.h.

## Example

#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int number1, number2;
	char *str;

	number1 = _printf("%s %i %d\n", "test", 0, 1); /*expected:test 0 1*/

	printf("Number of characters: %d\n", number1); /* xpected:9*/

	number2 = _printf("%% %c\n", 'A'); /*expected:% A*/

	printf("Number of characters: %d\n", number1); /*expected:4*/

	return (0);
}
