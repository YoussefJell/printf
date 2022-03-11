#include "main.h"

int _printf(const char *format, ...)
{
	int i;
	char character;
	char *string;
	va_list pa;

	va_start(pa, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				character = va_arg(pa, int);
				write(1, &character, 1);
			}
			if (format[i + 1] == 's')
			{
				string = va_arg(pa, char *);
				write(1, string, _strlen(string));
			}
			i++;
		}
	}
	va_end(pa);
}
