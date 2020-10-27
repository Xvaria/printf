#ifndef _printfH
#define _printfH

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

int _printf(const char *format, ...);

int (*funcstruct(char c))(va_list);

int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_int(va_list);


#endif
