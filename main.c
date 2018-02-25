#include <stdio.h>
#include "holberton.h"

int main(void)
{
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');

	_printf("Negative:[%d]\n", 762534);
	    printf("REAL:[%d]\n", 762534);

	_printf("Positive:[%d]\n", 762534);
	    printf("REAL:[%d]\n", 762534);

	_printf("Negative:[%i]\n", -762534);
	    printf("REAL:[%i]\n", -762534);

	    _printf("Negative:[%i]\n", 0);
	        printf("REAL:[%i]\n", 0);
	return (0);
}
