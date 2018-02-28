#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
  * struct op - contains print operators
  * @s: operator
  * @f: print function
  *
  */
typedef struct op
{
	char *s;
	int (*f)(va_list a);
} ops;
int _printf(const char *format, ...);
int print(char c);
int printchar(va_list a);
int printstring(va_list a);
int printint(va_list a);
int printbinary(va_list a);
int revstring(va_list a);
int printrot13(va_list a);
#endif
