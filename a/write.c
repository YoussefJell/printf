#include "main.h"
/**
 * write_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int write_char(const char c)
{
	return (write(1, &c, 1));
}

/**
 * write_string - writes the string to stdout
 * @string: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int write_string(const char *string)
{
	return (write(1, string, _strlen(string)));
}