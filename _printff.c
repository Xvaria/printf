#include "holberton.h"

/**
 * print_char - write in standar output a char
 * @c: character
 * Return: 1
 */
int print_char(va_list c)
{
	unsigned char a;

	a = va_arg(c, int);
	write(1, &a, 1);
	return (1);
}

/**
 * print_string - write in standar output a string
 * @s: string
 * Return: t
 */
int print_string(va_list s)
{
	int t;
	char *st;

	st = va_arg(s, char *);
	if (!st)
		st = "(null)";
	for (t = 0; st[t] != '\0'; t++)
		write(1, &st[t], 1);
	return (t);
}

/**
 * print_per - write in standar output a %
 * Return: 1
 */
int print_per(void)
{
	write(1, "%", 1);
	return (1);
}
