#include "main.h"
/**
 * strlen - string length function
 * @string: input string
 * Return: count
 */
int _strlen(char *string)
{
	int count = 0;

	for (count = 0; string[count] != '\0'; count++)
		;

	return (count);
}
