#include "holberton.h"

/**
 *
 *
 */
int pc(va_list c)
{
	char a;

	a = va_arg(c, int);
	write(1, &a, 1);
	return(1);
}

/**
 *
 *
 */
int ps(va_list s)
{
	int t;
	char *st;

	st = va_arg(s, char *);
	if (!str)
		str = "(null)";
	for (t = 0; st[t]; t++)
		write(1, &st[t], 1);
	return (t);
}

/**
 *
 *
 */
int pp(void)
{
	write(1, "%", 1);
	return(1);
}
