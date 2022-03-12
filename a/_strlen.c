#include "main.h"
/**
 * _strlen - counts string length of s
 * @string: string to count the length of
 * Return: int, length of string
 */
int _strlen(const char *string)
{
	int count = 0;

	for (count = 0; string[count] != '\0'; count++)
		;

	return (count);
}
