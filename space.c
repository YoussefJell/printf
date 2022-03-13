#include "main.h"
/**
 * space - returns the index of the last space
 * @format: string to check for spqces
 * @index: index of 1st space
 * Return: int, index of last space
 */
int space(const char *format, int index)
{
	while (format[index] == ' ')
	{
		index++;
	}
	return (index - 1);
}
