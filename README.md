# Printf
### Description

_printf is a custom implementation of the C programming function printf. This homemade version of printf prints strings, characters and numbers. It will print a reversed string, numbers in binary, and will also encode strings in rot13.

### Environment
Our printf program was developed and tested with `Ubuntu 14.04 LTS`

### File Contents
The repository consists of the following files:

|   **File**   |   **Description**   |
| -------------- | --------------------- |
| \_printf.c | The printf function |
| holberton.h   | Header file containing all function prototypes and struct declarations |
| printfunctions.c  | File containing main print functions |
| advancedfuncs.c | File containing additional print functions |

### Function Descriptions
| **Function** | **Description** |
| -------------- | ----------------- |
|int print(char c)| Writes a character to stdout|
|int printstring(va_list list)|Prints strings|
|int printchar(va_list list)|Prints a character|
|int printint(va_list list)|Prints integers|
|int printbinary(va_list)|Prints numbers in binary|
|int printrev(va_list list)|Prints a reverse string|
|int printrot13(va_list)|Prints strings in rot13|

### Usage and Installation
Clone the repository, create a main.c file, compile, and run the executable.
```
$ git clone https://github.com/mikaelia/printf.git
```
### Compilation

This code was compiled as follows:
` $ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o printf `

###### Example main.c and output

```
#include "holberton.h"

int main(void)
{
	_printf("Hello %s\n", "World");
	return (0);
}
=========================================
$ ./printf
Hello World
$
```
###### Key:

% +

- c - char
- d - digit
- i - integers
- b - binary
- s - string
- r - reverse string
- R - rot13 string

###  Roadmap 

Adding additional print functionality

### Authors

* [**Mikaela Gurney**](https://github.com/Mikaelia)
* [**Leon Cheung**](https://github.com/HiddenJem245)

