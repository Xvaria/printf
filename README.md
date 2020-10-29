# OUR OWN PRINTF FUNCTIONS (_printf)

[![N|Solid](https://camo.githubusercontent.com/606b1bb31bbd10ccc8c596ce5decaf9e03f85c44/68747470733a2f2f686f6c626572746f6e7363686f6f6c2d626c6f672e73332e616d617a6f6e6177732e636f6d2f77702d636f6e74656e742f75706c6f6164732f323031352f30392f32393132353730342f686f6c626572746f6e2d6c6f676f2d37313234336430333162316235346132613539613763653730306432353239666438616431343836343739393037336461323935363966623864346238393235312e706e67)](http://www.holbertonschool.com/)
[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)


_printf is a project based on emulate the normal function of the C Library system [ int printf(const char *format, ...) ], that  sends formatted output to stdout.
# SYNOPSIS
```c
_printf(const char *format, ...)
```
# DESCRIPTION
Prints formated arguments in the presence of the universal symbol %(FORMAT), if this symbol isnt presence in the parameter passed, the function will only print the string without any formated option
FORMAT identifies a value after his invocation [ %[formater]], these "formater" especifies the output way of a variable or the same FORMAT argument string
# STRUCTURE
In the presence of the universal symbol, the function will look in a structure previously created for the coincidence of "formater", and, redirect to a function where is stored the function to execute according on a match
| Formater      | Function to use |
| :----: | :----: |
| Char let      |       Int ( *f )()       |
> The variable named let stores the "formater" identifier
> .
> The function *f, points to a function assuming a coincidence in his first instance
### "formaters"
This is a list of the possibles matches in the "formater" char:
* %-c : Write in the output console a int argument converted to an unsigned char.
* %-s : The (const char *) argument is expected to be a pointer to an array of character type (pointer to an string). Characters from the array are written up to.
* %-% : If after the FORMAT is another '%' the function just print the percent in the output console.
* %-i/d : the int argument is converted to a signal decimal notation
* %-u : If a int argument is passed, the program will attemp to convert it on a unsigned int, and will be printed in format of unsigned decimal.
* %-o : If a int argument is passed, the program will attemp to convert it on a unsigned int, and will be printed in format of unsigned octal format.
* %-x : If a int argument is passed, the program will attemp to convert it on a unsigned int, and will be printed in format of unsigned Hexadecimal lowercase format.
* %-X : If a int argument is passed, the program will attemp to convert it on a unsigned int, and will be printed in format of unsigned Hexadecimal lowercase format.
* %-r : The function will change the order to be printed out, reversing the given argument in the standard outpu
### Flowchart

![N|Solid](https://i.postimg.cc/Q88nSV2j/Untitled-Document-1.png)

### Example
```c
#include "holberton.h"
/**
 * main - Entry point
 * Return: always (0) success
 */
 int main (void)
 {
     _printf("Hello Holberton \n"); /* To print litteral string*/
     _printf("%(formater)", arguments)
     /* give the formater a paramter to use */
     int num = 527;
     _printf("%d \n", num);
     /*We give the formater d:(print integer), and the argument to use is num*/
     return (0);
}
```
This will be the expected output:
```c
 Hello Holberton
 527
```
### Files presents
This are the files present in the folder
| Plugin | README |
| ------ | ------ |
| holberton.h | Header with all the proptotypes |
| _printf.c | Main file with the principal function |
| _printff.c | Functions to print in format: (char, int, string and reversed) |
| _bin_func.c | Function to print in format binary |
| _unsigned_func.c | Function to print in format(unsigned: octal, decimal, Hexuppercase and Hexlowercase) |
| _putchar.c | Function to write only a character |
| man_3_printf | Function to write only a character |
### To compile
You can create your own main.c to use with this function, and compile it with the files presented above.
```sh
gcc -Wall -Werror -Wextra -pedantic holberton.h *.c
```
#### Building environment
You could build this program in another environment or O.S., but, could present problems with external libraries needed for this program-function:
* Compiled under gcc 4.8.4 with the above flags to prevent warning
* Ubuntu 14.04
* You coul use the Betty style format to beauty and format your code
### Authors
 - Nicolas Soler: [@joseNSoler](https://www.github.com/joseNSoler)
 - Diego Ahumada: [@Xvaria](https://www.github.com/Xvaria)
 - Andres Sotelo: [@ANDRESOTELO](https://www.github.com/ANDRESOTELO)
License
-----
MIT - Holberton School
Data-time
-----
- October 29 2020
- Cohort 13
-----
**Holberton School CH13!**