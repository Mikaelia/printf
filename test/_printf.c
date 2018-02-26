#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * _printf - produces output according to a format
  * @format: character string with directives
  *
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int length;
	va_list arglist;

	length = 0;

	va_start(arglist, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			length = (*getopfunc(format))(arglist);
		}
		else
		{
			print(*format);
			length++;
		}
		format++;
	}
	return (length);
}
