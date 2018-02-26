#include "holberton.h"
#include <stdarg.h>
/**
  * printpercent - prints percent
  * @a: argument type
  *
  * Return: void
  */
int printpercent(va_list a)
{
	print(va_arg(a, int));
	return (1);
}
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

	i = 0;

	s = va_arg(a, char *);
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
	print(va_arg(a, int));
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

	num = va_arg(a, int);
	mult = 1;
	count = 1;

	if (num < 0)
	{
		print ('-');
		num *= -1;
	}

	numcopy = num;
	while (numcopy > 10)
	{
		numcopy /= 10;
		mult *= 10;
		count++;
	}
	len = (count);
	while (count > 0)
	{
		if ((num / mult) < 10)
		{
			print((num / mult + '0'));
		}
		else
			print(((num / mult) % 10) + '0');
		count--;
		mult /= 10;
	}
	return (len);
}
/**
  * printdigit - prints digits
  * @a: argument passed in
  *
  * Return: void
  */
int printdigit(va_list a)
{
	int num;
	int mult;
	int count;
	int numcopy;
	int len;

	num = va_arg(a, int);
	mult = 1;
	count = 1;

	if (num < 0)
	{
		print ('-');
		num *= -1;
	}

	numcopy = num;
	while (numcopy > 10)
	{
		numcopy /= 10;
		mult *= 10;
		count++;
	}
	len = count;
	while (count > 0)
	{
		if ((num / mult) < 10)
		{
			print((num / mult + '0'));
		}
		else
			print(((num / mult) % 10) + '0');
		count--;
		mult /= 10;
	}
	return (len);
}