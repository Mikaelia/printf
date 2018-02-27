#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
  * printstring - prints strings
  * @a: argument type
  *
  * Return: void
  */
int printstring(va_list a)
{
	char *s;
	int i;
	char *n;

	n = "(null)";

	i = 0;

	s = va_arg(a, char *);
	if (!(s))
	{
		while (*n != '\0')
		{
			print(*n);
			n++;
		}
		return (6);

	}
	while (s[i] != '\0')
	{
		print(s[i]);
		i++;
	}
	return (i);
}
/**
  * printchar - prints chars
  * @a: argument type
  *
  * Return: void
  */
int printchar(va_list a)
{
	char s;

	s = va_arg(a, int);

	print(s);

	return (1);
}
/**
  * printint - prints ints
  * @a: argument passed in
  *
  * Return: void
  */
int printint(va_list a)
{
	int num;
	int mult;
	int count;
	int numcopy;
	int len;
	int t = 0;

	num = va_arg(a, int);
	mult = 1;
	count = 1;

	if (num < 0)
	{
		print ('-');
		num = (num + 1) * -1;
		t = 1;
	}
	numcopy = num;
	while (numcopy >= 10)
	{
		numcopy /= 10;
		mult *= 10;
		count++;
	}
	len = count;
	while (count > 1)
	{
		if ((num / mult) < 10)
		{
			print((num / mult + '0'));
		}
		else
		{
			print(((num / mult) % 10) + '0');
		}
		count--;
		mult /= 10;
	}
	print(num % 10 + t + '0');
	return (len);
}
