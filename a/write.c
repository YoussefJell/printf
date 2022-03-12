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

/**
 * write_number- writes the number to stdout
 * @number: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int write_number(int number)
{
	unsigned int i, tmp, count, unsigned_number;
	char c, sign;

	i = 1;
	count = 0;
	if (number < 0)
	{
		unsigned_number = -(unsigned int)number;
		sign = '-';
		count++;
		write(1, &sign, 1);
	}
	else 
		unsigned_number = (unsigned int)number;

	while (unsigned_number / i > 9)
	{
		i *= 10;
	}

	while (i >= 1)
	{
		tmp = unsigned_number / i;
		unsigned_number = unsigned_number % i;
		c = tmp + 48;
		write(1, &c, 1);
		count++;
		i /= 10;
	}
	return (count);
}