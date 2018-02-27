#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len1, len2, len3, len4, len5, len6;

	_printf("");
	_printf(NULL);
	 len1 = _printf("Character:[%c]\n", NULL);
	len2 = printf("Character:[%c]\n", NULL);
	 len3 = _printf("Character:[%c]\n", 'H', 'A');
	 len4 = printf("REALCharacter:[%c]\n", 'H', 'A');
	 len5 = _printf("Character:[%c%c%c%c]\n", 'H', 'A');
	 len6 = printf("REAlacter:[%c%c%c%c]\n", 'H', 'A');
	 printf("%d == %d\n%d == %d\n%d == %d\n", len1, len2, len3, len4, len5, len6);
	 len = _printf("Percent:[%%%%%%]\n");
	 len2 = printf("Percent:[%%%%%%]\n");
	 _printf("Len:[%d]\n", len);
	 printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	 printf("Unknown:[%r]\n");
	 _printf("Character:[%c%c]\n", 'H', 'A');
	 printf("REALCharacter:[%c%c]\n", 'H', 'A');
	return (0);
}
