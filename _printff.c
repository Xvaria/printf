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
 * Return: Number of bytes
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
 * print_int - write in standar output a integer
 * @d: integer to print
 * Return: t to size of bytes
 */

int print_int(va_list d)
{
	int num = va_arg(d, int);
	int count_dec = 0, decimal = 1;
	int y, ascii_num;
	int t = 0;
	unsigned int copy;


	if (!num)
	{
		_putchar('0');
		t++;
		return (t);
	}
	if (num < 0)
	{
		_putchar('-');
		t++;
		num *= -1;
	}

	copy = num;

	while (num)
	{
		num /= 10;
		count_dec++;
	}
	/*y is for iterate and create decimal length */
	for (y = 1; y < count_dec; y++)
		decimal *= 10;

	for (y = 0; y < count_dec; y++)
	{
		ascii_num = ((copy / decimal) % 10) + '0';
		_putchar(ascii_num);
		t++;
		decimal /= 10;
	}
	return (t);
}

/**
 * print_reversed - write in standar output a reversed string
 * @s: string
 * Return: Number of bytes
 */
int print_reversed(va_list s)
{
	int t = 0, b;
	char *st;

	st = va_arg(s, char *);
	if (!st)
		st = "(null)";
	for (b = 0; st[b] != '\0'; b++)
	{
	}
	for (; b >= 0; b--)
	{
		_putchar(st[b]);
		t++;
	}
	return (t);
}
