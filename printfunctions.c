#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * printrot13 - entry point
 *@s: pointer
 * Return: s
 */
int printrot13(va_list a)
{
	int i;
	int j;
	char *s;
	char *ns;
	int count;

	char lower[27] = "abcdefghijklmABCDEFGHIJKLM";
	char upper[27] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	s = va_arg(a, char *);
	i = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	ns = malloc(sizeof(char) * (count + 1));

	if (ns == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		ns[i] = s[i];
		i++;
	}

	for (i = 0; ns[i] != '\0'; i++)
		for (j = 0; j < 26; j++)
		{
			if (ns[i] == lower[j])
			{
				print((ns[i] += 13));
			}
			else if (ns[i] == upper[j])
				print((ns[i] -= 13));
		}
	return (i);
}
/*
  * revstring - prints unsigned ints to binary
  * @a: argument type
  *
  * Return: length
  */
int revstring(va_list a)
{
	char *s;
	char *ns;
	int i;
	int j;
	int count;

	i = 0;
	count = 0;

	s = va_arg(a, char *);

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	ns = malloc(sizeof(char) * (count + 1));

	if (s == NULL)
	{
		return (0);
	}

	j = 0;
	while (s[j] != '\0')
	{
		ns[j] = s[j];
		j++;
	}
	while (j >= 0)
	{
		print(ns[j]);
		j--;
	}
	free(ns);
	return (count);
}
/**
  * printbinary - prints unsigned ints to binary
  * @a: argument type
  *
  * Return: length
  */
int printbinary(va_list a)
{
	char *s;
	int count;
	unsigned int num, numcopy;
	int i;
	int c;

	i = 0;
	c = 1;
	count = 0;

	num = va_arg(a, unsigned int);

	numcopy = num;

	while (numcopy > 0)
	{
		numcopy /= 2;
		c++;
	}

	s = malloc(sizeof(unsigned int) * (c - 1));

	if (s == NULL)
	{
		free(s);
		return (0);
	}
	if (num == 0)
	{
		print(0 + '0');
		free(s);
		return (1);
	}
	while (num > 0)
	{
		s[i] = num % 2;
		num /= 2;
		i++;
	}
	count = i;
	i--;
	while (i >= 0)
	{
		print(s[i] + '0');
		i--;
	}
	free(s);
	return (count);
}

/**
  * printstring - prints strings
  * @a: argument type
  *
  * Return: length
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
  * Return: length
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
  * Return: length
  */
int printint(va_list a)
{
	int num;
	int mult;
	int count;
	unsigned int numcopy;
	unsigned int n;
	int len;

	num = va_arg(a, int);
	mult = 1;
	count = 1;

	if (num < 0)
	{
		print ('-');
		n = num * -1;
		numcopy = n;
	}
	else
	{
		n = num;
		numcopy = num;
	}
	while (numcopy >= 10)
	{
		numcopy /= 10;
		mult *= 10;
		count++;
	}
	if (num < 0)
		len = count + 1;
	else
		len = count;
	while (count > 1)
	{
		if ((n / mult) < 10)
		{
			print((n / mult + '0'));
		}
		else
		{
			print(((n / mult) % 10) + '0');
		}
		count--;
		mult /= 10;
	}
	print(n % 10 + '0');
	return (len);
}
