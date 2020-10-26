#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *a = "string";
	char b = 'a';

	_printf("%c%c\n", b, b);
	printf("%c%c\n", b, b);
	_printf("%s%s\n", a, a);
	printf("%s%s\n", a, a);
	_printf("%% %c %s\n", b, a);
	printf("%% %c %s\n", b, a);
	_printf("%%%%c%%s\n", b, a);
	printf("%%%%c%%s\n", b, a);
	_printf("s: %s %c\n", a, b);
	printf("s: %s %c\n", a, b);
	return (0);
}
