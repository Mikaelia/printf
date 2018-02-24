#ifndef HOLBERTON_H
#define HOLBERTON_H
int _printf(const char *format, ...);
#include <stdarg.h>
typedef struct op
{
	char *s;
	void (*f)(va_list a);
}ops;
int print(char c);
void printchar(va_list a);
void printstring(va_list a);
#endif
