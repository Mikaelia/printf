#include "holberton.h"
#include <stdio.h>

/**
   * main - Entry point
    *
     * Return: Always 0
      */
int main(void)
{
	   int len, len1;
	   len = _printf("%b\n", 98);
	   _printf("This is the length:%i\n", len);
	   len1 = _printf("%b\n", 9);
	   _printf("This is the length: %i\n", len1);
	   len = _printf("%b\n", 100);
	   _printf("This is the length:%i\n", len);
	   len1 = _printf("%b\n", 4);
	   _printf("This is the length: %i\n", len1);
	   len = _printf("%b\n", 0);
	   _printf("This is the length:%i\n", len);
	   len1 = _printf("%b\n", 1);
	   _printf("This is the length: %i\n", len1);
	    _printf("%b\n", 9, 3);
	    _printf("%b\n", NULL);
	    _printf("%b\n", 0);
	    _printf("%b\n", 1);
	    _printf("%b\n", 'H');

	        return (0);

}
