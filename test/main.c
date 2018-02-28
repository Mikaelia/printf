#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

    len = _printf("%b\n", 98);
    _printf("%i\n", len);
    len = _printf("%b\n", 2);
    _printf("%i\n", len);
    return (0);
}
