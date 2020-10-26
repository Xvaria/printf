#include "holberton.h"

/**
 * pc - write in standar output a char
 * @c: character
 * Return: 1
 */
int pc(va_list c)
{
	char a;

	a = va_arg(c, int);
	write(1, &a, 1);
	return (1);
}

/**
 * ps - write in standar output a string
 * @s: string
 * Return: t
 */
int ps(va_list s)
{
	int t;
	char *st;

	st = va_arg(s, char *);
	if (!st)
		st = "(null)";
	for (t = 0; st[t]; t++)
		write(1, &st[t], 1);
	return (t);
}

/**
 * pp - write in standar output a %
 * Return: 1
 */
int pp(void)
{
	write(1, "%", 1);
	return (1);
}
