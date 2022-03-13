#include "main.h"
/**
 * _switch - prints each variable directive
 * @format: the string to be printed
 * @pa1: variable argument
 * @index: current position of the character
 * @counter: count the number of characters
 * Return: int
 */
int _switch(const char *format, va_list pa1, int index, int *counter)
{
	char *string;

	if (format[index + 1] == ' ')
		index = space(format, index + 1);
	switch (format[index + 1])
	{
	case 'c':
		write_char(va_arg(pa1, int));
		(*counter)++;
		break;
	case 's':
		string = va_arg(pa1, char *);
		if (string != NULL)
		{
			write_string(string);
			(*counter) += _strlen(string);
		}
		else
		{
			write_string("(null)");
			(*counter) += 6;
		}
		break;
	case 'i':
		(*counter) += write_number(va_arg(pa1, int));
		break;
	case 'd':
		(*counter) += write_number(va_arg(pa1, int));
		break;
	case '%':
		write_char('%');
		(*counter)++;
		break;
	default:
		write_char('%');
		(*counter)++;
		index--;
		break;
	}
	return (index);
}
