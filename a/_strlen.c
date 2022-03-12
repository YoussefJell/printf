#include "main.h"

int _strlen(const char *string)
{
	int count = 0;

	for (count = 0; string[count] != '\0'; count++)
		;

	return (count);
}