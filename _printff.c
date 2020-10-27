#include "holberton.h"


/**
 * _putchar - writes a character c to stdout
 * @c: character
 * Return: write c
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

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
 * print_int - write in standar output a integer
 * Return: 1
 */

int print_int(va_list d)
{
	int num = va_arg(d, int);
	int x = 1, decimal = 1;
	int y;
	int nbytes = 1;
	unsigned int copy = num, copydec = num;


	if(!num)
	{
		_putchar('0');
		return (nbytes);
	}
	if (num >= 0 && num <= 9)
		_putchar('0' + num);
	else if (num < 0 && num >= -9)
	{
		num *= -1;
		nbytes++;
		_putchar('-');
		_putchar('0' + num);
	}
	else
	{
		if (num <= -10)
		{
			num *= -1;
			nbytes = 1;
			_putchar('-');
			copy = num;
			copydec = num;
		}
		for(x = 1; (copydec / 10) > 0; x++)
			copydec /= 10;	   
		for (y = x; y > 1; y--)
			decimal *= 10;
		for (y = 1; y <= x; y++)
		{
			copydec = copy / decimal;
			copy = copy - (copydec * decimal);
			decimal /= 10;
			_putchar('0' + copydec);
		}
	}
	if (nbytes == 1)
		return(x + 1);
	return (x);
}
