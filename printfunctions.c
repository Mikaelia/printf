#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * printstring - prints strings
  * @a: argument type
  *
  * Return: void
  */
void printstring(va_list a)
{
	char *s;
	int i;

	i = 0;
	s = va_arg(a, char *);
	while (s[i] != '\0')
	{
		print(s[i]);
		i++;
	}
}
/**
  * printchar - prints chars
  * @a: argument type
  *
  * Return: void
  */
void printchar(va_list a)
{
	print(va_arg(a, int));
}
/**
  * printint - prints ints
  * @a: argument type
  *
  * Return: void
  */
void printint(va_list a)
{
	int b;


	b = va_arg(a, int);

		print(b);
}
/**
  * printdigit - prints digits
  * @a: argument type
  *
  * Return: void
  */
void printdigit(va_list a)
{
	int b;

	b = va_arg(a, int);
	if (b < 0)
		print ('-');
	b *= -1;

	while (b >= 10)
	{
		(b / 10)
	}
}
