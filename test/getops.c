#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * getopfunc - prints output according to a format
  * @format: character string with directives
  *
  * Return: number of characters printed
  */
int (*getopfunc(const char *format))(va_list arglist)
{
	int i, j;

	ops printops[] = {
		{"c", printchar},
		{"s", printstring},
		{"d", printdigit},
		{"i", printint},
		{"%", printpercent},
		{NULL, NULL}
	};
	i = 0, j = 0;
		while (printops[j].s != NULL)
		{
			if (*(printops[j].s) == format[i])
			{
				return (printops[j].f);
			}
			j++;
		}
		return (0);
}
