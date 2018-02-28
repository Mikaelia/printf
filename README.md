# Printf
### Description
This is a homemade version of printf that prints strings, characters and numbers.

### Environment
Our printf function was developed and tested on `Ubuntu 14.04 LTS` via Vagrant in VirtualBox.

### File Contents
The repository contains the following files:

|   **File**   |   **Description**   |
| -------------- | --------------------- |
| \_printf.c | The printf function |
| holberton.h   | Header file containing all function prototypes and struct declaration |
| advancedfuncs.c | File containing extra print functions |
| printfunctions.c  | File containing all print functions |

### Function Descriptions

| **Function** | **Description** |
| -------------- | ----------------- |
|int print(char c)| Writes a character to stdout|
|int printstring(va_list list)|prints strings|
|int printchar(va_list list)|prints a character|
|int printint(va_list list)|prints integers|
|int printbinary(va_list)|prints numbers in binary|
|int printrev(va_list list)|prints a reverse string|
|int printrot13(va_list)|prints strings in rot13|

### Usage and Installation
Clone the repository, compile with  by cloning the repository to a directory, then run the executable.
```
$ git clone https://github.com/mikaelia/printf.git
```
### Compilation

This code was compiled with the following flags:
` $ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o printf `

###### Example code

```
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

###  Roadmap 

Adding more format modifiers:
* r
* R
* b

### Authors

* [**Mikaela Gurney**](https://github.com/Mikaelia)
* [**Leon Cheung**](https://github.com/HiddenJem245)

<p align="center">
<a href="https://www.holbertonschool.com"><img src="https://intranet.hbtn.io/assets/holberton-logo-simplified-d4e8a1e8bf5ad93c8c3ce32895b4b53749b477b7ba7342d7f064e6883bcd3be2.png"></a>
</p>
