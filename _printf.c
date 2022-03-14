#include "main.h"
/**
 *  _printf - prints a string to standard output
 * @format: The string to print
 * @...: The alipsis
 * Return: 1ength of characters printed
 * On error, -1 is returned
 */
int _printf(const char *format, ...)
{
	int i, counter;
	va_list pa1;

	counter = 0;

	if (format == NULL)
		return (0);

	va_start(pa1, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write_char(format[i]);
			counter++;
		}
		else
		{
			if (format[i + 1] == '\0')
				return (-1);

			i = _switch(format, pa1, i, &counter);
			i++;
		}
	}
	va_end(pa1);
	return (counter);
}
