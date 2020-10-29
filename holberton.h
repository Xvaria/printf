#ifndef _printfH
#define _printfH

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * struct print_s - array of functions
 * @let: characters
 * @f: functions
 */
typedef struct print_s
{
	char let;
	int (*f)();
} print_t;

/**
 * _printf - print all types of data
 * @format: list of arguments to print
 * Return: t or -1
 */

int _printf(const char *format, ...);

int (*funcstruct(char c))(va_list);

int print_char(va_list);
int print_string(va_list);

int print_int(va_list);

int print_unsigned_u(va_list);
int print_unsigned_o(va_list);
int print_unsigned_x(va_list);
int print_unsigned_X(va_list);

int print_reversed(va_list);



#endif
