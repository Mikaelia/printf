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
	int i, j;

	ops printops[] = {
		{"c", printchar},
		{"s", printstring},
		{"d", printdigit},
		{"i", printint},
		{NULL, NULL}
	};

	va_list arglist;
	i = 0;
	j = 0;

	va_start(arglist, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (printops[j].s != NULL)
			{
				if (*(printops[j].s) == format[i])
				{
					printops[j].f(arglist);
					break;
				}
				j++;
			}
		}
		else
			print(format[i]);
		i++;
	}
	return (0);
}
