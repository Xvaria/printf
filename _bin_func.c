#include "holberton.h"

/**
 * print_bin - unsigned int argument is converted to binary
 * @b: integer to convert binary
 * Return: t to size of bytes
 */

int print_bin(va_list b)
{
	unsigned int num_dec;
	int t = 0;/*count bytes*/
	int i;/*iterate in n_temp*/
/*int j;*//*iterate print*/
	char n_temp[32];/*array to save numbers to print*/

	num_dec = va_arg(b, unsigned int);

	if (num_dec <= 0)
	{
		_putchar(48);
		t++;
		return (t);
	}

	if (!num_dec)
	{
		return (-1);
	}

	i = 0;
	while (num_dec > 0)
	{
		if (num_dec % 2 == 0)
			n_temp[i] = '0';
		else
			n_temp[i] = '1';
		num_dec = num_dec / 2;
		i++;
	}

	while (i >= 0)
	{
		_putchar(n_temp[i]);
		i--;
		t++;
	}
	return (t);
}
