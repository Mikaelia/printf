#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');

	_printf("Test positive:[%i]\n", 762534);
	printf("REAL:[%i]\n", 762534);

	_printf("Test negative:[%i]\n", -762534);
	printf("REAL:[%i]\n", -762534);

	_printf("Testprint Zero:[%i]\n", 0);
        printf("REAL:[%i]\n", 0);

	 _printf("Unknown:[%r]\n");
	 printf("Unknown:[%r]\n");

	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");

   	_printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);

	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n",len2);

	_printf("Empty string:[%s]\n", "");
	printf("REAL:[%s]\n", "");


	_printf("Empty string:[%%%%%%s]\n", "String here");
	printf("REAL:[%%%%%%s]\n", "String here");
	return (0);
}
