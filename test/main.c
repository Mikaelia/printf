#include <stdio.h>
#include "holberton.h"

int main(void)
{
	int len, len2;

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	
	len = printf("String:[%s]\n", NULL);
	len2 = _printf("String:[%s]\n", NULL);


	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n",len2);

	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');

	
	printf("Character NULL- real:[%c]\n", NULL);
	_printf("Character NULL:[%c]\n", NULL);

	
	printf("integers passed to string- real:[%c]\n", '9');
	_printf("integer passed to string  NULL:[%c]\n", '9');

	_printf("Test positive:[%i]\n", 762534);
	printf("REAL:[%i]\n", 762534);

	_printf("Test negative:[%i]\n", -762534);
	printf("REAL:[%i]\n", -762534);

	printf("Testprint NULL:[%d]\n", NULL);
        _printf("REAL:[%d]\n", NULL);

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

	    len = _printf("Percent:[%%]\n");
	        len2 = printf("Percent:[%%]\n");

		 _printf("Len:[%d]\n", len);
		     printf("Len:[%d]\n", len2);


	return (0);
}
