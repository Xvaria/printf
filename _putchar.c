#include "holberton.h"

/**
 * _putchar - writes a character c to stdout
 * @c: character
 * Return: write c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
