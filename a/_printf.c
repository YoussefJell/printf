#include "main.h"

int _printf(const char *format, ...)
{
	int i, counter;
	char *string;
	va_list pa1;

	if (format == NULL)
		return (0);
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
				case '%':
					write_char('%');
					break;

			}
			i++;
		}
	}
	va_end(pa1);

	return (counter);
}


int main()
{
	int a;
	a =_printf("123456789 %% %c %s world\n", 'c', 'h');
	printf("%d",a);
	return (0);
}