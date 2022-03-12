#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _strlen(const char *string);
int space(const char *format, int index);
int _switch(const char *format, va_list pa1, int index, int *counter);
int write_char(const char c);
int write_string(const char *string);
int write_number(int number);
int _printf(const char *format, ...);

#endif
