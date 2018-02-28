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
	int len;
	int len2;

	len = _printf("%R\n", "Why did the chicken cross the road?");
	len2 = _printf("%r\n", "Let's to printf a simple sentence.");
	

	_printf("This is the length: %i", len);
	_printf("This is the length: %i", len2);

	
	len = printf("%s\n", "Why did the chicken cross the road?");
	len2 = printf("%s\n", "Let's to printf a simple sentence.");

	printf("This is the length: %i", len);
	printf("This is the length: %i", len2);
    return (0);
}
