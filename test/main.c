#include <limits.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

int main(void)
{

	int len, len2;

	_printf("String:[%s%s]\n", "I am a string !", "string2");
	printf("String:[%s %s]\n", "I am a string !", "string2");

	_printf("%%%\n");
	printf("%%%\n");
/*NULL tests */


	len2 = printf("Textbeforenullinput%s\n", NULL);
	len = _printf("Textbeforenullinput%s\n", NULL);

	_printf("Passing in null:  %s\n", NULL);
	printf("Real passing in null:  %s\n", NULL);


	_printf("%s Passing in text after\n", NULL);
	printf("%s passing in test after Real\n", NULL);

	_printf("%sa%\n", "banana");
	printf("%sa%\n", "banana");


printf("Testing NULL with digits and ints\n");

	printf("REAL: %d\n", NULL);
	_printf("%d\n", NULL);
	printf("REAL: %c\n", NULL);
	_printf("%c\n", NULL);
	printf("REAL: %i\n", NULL);
	_printf("%i\n", NULL);
	printf("REAL:%%\n", NULL);
	_printf("%%\n", NULL);

	/* char tests */

	_printf("%d\n", 105);
	printf("%d\n", 105);


	_printf("%c\n", -145);
	printf("%c\n", -145);


	_printf("%c\n", 0);
	printf("%c\n", 0);

/* no format, NULL arg */

	_printf("%s\n", NULL);
	printf("%shi\n", NULL); /*throws segfault */

	len = _printf("Mine[%c]\n", NULL); /*noprint, newline */
	len2 = printf("REAL[%c]\n", NULL);

	_printf("Length: %d\n", len);
	printf("Length: %d\n", len2);


	_printf("%i\n", NULL);
	printf("%i\n", NULL);

	_printf("%d\n", NULL);
	printf("%d\n", NULL);

/* percent tests */

	printf("REAL single percent[%]\n", 'H');
	_printf("single percent[%]\n", 'H');

	printf("REAL percent and spaces[%   ]\n", 'H');
	_printf("percent and spaces:[%   ]\n", 'H');


	printf("REAL percent and spaces and character[%    c]\n", 'H');
	_printf("percent and spaces and character:[%    c]\n", 'H');

	printf("REAL percent and spaces and character[%    s]\n", "Hello");
	_printf("percent and spaces and character:[%    s]\n", "Hello");

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
/* percent tests */
	_printf("Edge Case: %%s multiple percents\n");
	printf("REAL Eege Case: %%s multiple percents\n");

	_printf("Edge Case: %  %  s multiple percents\n", "hi");
	printf("REAL Edge Case: %  %  s multiple percents\n", "hi");

	_printf("Edge Case: %     %   multiple percents\n");
	printf("REAL Edge Case: %     %   multiple percents\n");

	_printf("Edge Case: %     do multiple percents\n", 20);
	printf("REAL Edge Case: %     do multiple percents\n", 20);
/* number tests */

	_printf("%i\n", INT_MAX);
	printf("%d\n", INT_MAX);
	
	_printf("%i\n", INT_MIN);
	printf("%d\n", INT_MIN);

	
	_printf("%i\n", 0);
	printf("%d\n", 0);


	_printf("%d\n", 1024);
	printf("%d\n", 1024);

	return (0);
}
