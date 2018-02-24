#include "holberton.h"
#include <stdarg.h>
/**
  * printstrings - prints strings
  * @a: argument type
  *
  * Return: void
  */
void printstrings(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	while (s != '\0')
		print(*s);
}
/**
  * printchar - prints chars
  * @a: argument type
  *
  * Return: void
  */
void printchar(va_list a)
{
	print(va_arg(a, char));
{

