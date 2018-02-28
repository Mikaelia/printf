#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
   * main - Entry point
    *
     * Return: Always 0
      */
int main(void)
{
	   int len, len1;
	   len = _printf("%b\n", 0);
	   _printf("This is the length:%i\n", len);
	   len1 = _printf("%b\n", 3);
	   _printf("This is the length: %i\n", len1);
	   len = _printf("%b\n", 8);
	   _printf("This is the length:%i\n", len);
	   len1 = _printf("%b\n", 45);
	   _printf("This is the length: %i\n", len1);
	   len = _printf("%b\n", 100);
	   _printf("This is the length:%i\n", len);
	   len1 = _printf("%b\n", INT_MAX);
	   _printf("This is the length: %i\n", len1);
	   len = _printf("%b\n", INT_MIN);

	        return (0);

}
