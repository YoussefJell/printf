#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _strlen(char *string)
{
	int count = 0;

	for (count = 0; string[count] != '\0'; count++)
		;

	return (count);
}

int _print(const char *format, ...)
{
	int i, counter;
	char character;
	char* string;
	va_list pa;

	counter = 0;
	va_start(pa, format);

	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1,&format[i],1);
			counter++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				character = va_arg(pa,int);
				write(1,&character,1);
				counter++;
			}
			if (format[i + 1] == 's')
			{
				string = va_arg(pa, char*);
				write(1,string,_strlen(string));
				counter += _strlen(string);
			}
			i++;
		}
	}
	va_end(pa);
	return (counter);
}


int main()
{
	int a;
	char c = 'A';
	char *s = "bc";
	a =_print("0 %c%s%c%s\n", c, s, 'd', "ef");
	printf("counter =>%d",a);
	return (0);
}