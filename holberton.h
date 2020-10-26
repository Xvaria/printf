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

int pc(va_list);

int ps(va_list);

int pp(void);

#endif
