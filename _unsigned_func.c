#include "holberton.h"

/**
 * print_unsigned_u - analize a int and print it on unsigned value
 * @d: va_list with arguments
 * Return: nbytes - number of bytes used
 */
int print_unsigned_u(va_list d)
{
	unsigned int num = va_arg(d, int);
	int count_dec = 0, decimal = 1;
	int y, ascii_num;
	int t = 0;
	unsigned int copy;

		/*print case of 0*/
	if (!num)
	{
		int b = 0;

		while (b < 2)
		{
			_putchar ('0');
			t++;
			b++;
		}
		return (t);
	}
	copy = num;
		/* count_dec store the n times that num can be divided by 10 */
	while (num)
	{
		num /= 10;
		count_dec++;
	}
		/* y for iterate and create decimal length (1 * (10 * count_dec)) */
	for (y = 1; y < count_dec; y++)
		decimal *= 10;

		/*print over left to rigth */
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
 * print_unsigned_o - analize a int and print it on unsigned octal format
 * @d: va_list with arguments
 * Return: nbytes - number of bytes used
 */
int print_unsigned_o(va_list d)
{

	unsigned int num, int_arr[1020];
	int x = 0, nbytes = 0;
	char c;

	num = va_arg(d, int);

		/*case of num equal to 0*/
	if (num < 1)
	{
		_putchar('0');
		nbytes++;
		return (nbytes);
	}
	/*analize length of num and divide it*/
	/*in positions onto an array, each position-one digit*/
	while (num > 0)
	{
		int_arr[nbytes] = num % 8;
		num /= 8;
		nbytes++;
	}
		/*print in reverse the orden of the array of one digit*/
	for (x = nbytes - 1; x >= 0; x--)
	{
		c = int_arr[x] + 48;
		_putchar(c);
	}
		/*return n of bytes used*/
	return (nbytes);
}

/**
 * print_unsigned_x - analize a int and print it on unsigned hexadecimal
 * lowercase value
 * @d: va_list with arguments
 * Return: nbytes - number of bytes used
 */

int print_unsigned_x(va_list d)
{
	unsigned int num, int_arr[1024];
	int x = 0, nbytes = 0;
	char c;

	num = va_arg(d, int);

		/*case of num equal to 0*/
	if (num < 1)
	{
		_putchar('0');
		nbytes++;
		return (nbytes);
	}
		/*analize length of num and divide*/
		/*it in positions onto an array, each position-one*/
		/*digit in base octal lowercase*/
	while (num > 0)
	{
		int_arr[nbytes] = num % 16;
		num /= 16;
		if (int_arr[nbytes] > 9)
			int_arr[x] = int_arr[nbytes] + 39;
		else
			int_arr[x] = int_arr[nbytes];
		x++;
		nbytes++;
	}
		/*print in reverse the orden of the array of one digit*/
	for (x = nbytes - 1; x >= 0; x--)
	{
		c = int_arr[x] + 48;
		_putchar(c);
	}
	return (nbytes);
}

/**
 * print_unsigned_X - analize a int and print it on unsigned hexadecimal
 * uppercase value
 * @d: va_list with arguments
 * Return: nbytes - number of bytes used
 */

int print_unsigned_X(va_list d)
{
	unsigned int num, int_arr[1024];
	int x = 0, nbytes = 0;
	char c;

	num = va_arg(d, int);

		/*case of num equal to 0*/
	if (num < 1)
	{
		_putchar('0');
		nbytes++;
		return (nbytes);
	}
		/*analize length of num and divide it*/
		/*in positions onto an array, each position-one*/
		/*digit in base hex*/
	while (num > 0)
	{
		int_arr[nbytes] = num % 16;
		num /= 16;
		if (int_arr[nbytes] > 9)
			int_arr[x] = int_arr[nbytes] + 7;
		else
			int_arr[x] = int_arr[nbytes];
		x++;
		nbytes++;
	}
		/*print in reverse the orden of the*/
		/*array of one digit and start with uppercase value*/
	for (x = nbytes - 1; x >= 0; x--)
	{
		c = int_arr[x] + 48;
		_putchar(c);
	}
	/*return n bytes used to print*/
	return (nbytes);
}
