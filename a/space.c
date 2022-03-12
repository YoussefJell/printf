#include "main.h"

int space(const char *format, int index)
{
	while (format[index] == ' ')
	{
		index++;
	}
	return (index - 1);
}