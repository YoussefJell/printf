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
	char *string;
	va_list pa1;

	if (format == NULL)
		return (-1);
	counter = 0;
	va_start(pa1, format);
	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write_char(format[i]);
			counter++;
		}
		else
		{
			if (format[i + 1] == ' ')
				i = space(format, i + 1);
			switch(format[i + 1])
			{
				case 'c':
					write_char(va_arg(pa1, int));
					counter++;
					break;
				case 's':
					string = va_arg(pa1, char*);
					write_string(string);
					counter += _strlen(string);
					break;
				case 'i':
					counter += write_number(va_arg(pa1, int));
					break;
				case 'd':
					counter += write_number(va_arg(pa1, int));
					break;
				case '%':
					write_char('%');
					counter++;
					break;
				default:
					write_char('%');
					i--;
					break;
			}
			i++;
		}
	}
	va_end(pa1);
	return (counter);
}