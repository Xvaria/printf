#include "holberton.h"

/**
 * _printf - print all types of data
 * @format: list of arguments to print
 * Return: t or -1
 */
int _printf(const char *format, ...)
{
	print_t func[] = {
		{'c', pc},
		{'s', ps},
		{'%', pp},
		{'\0', NULL}
	};
	va_list valist;
	int t = 0, a, b;

	if (format && format[0])
	{
		va_start(valist, format);
		for (a = 0; format[a]; a++)
		{
			if (format[a] == '%')
			{
				a++;
				for (b = 0; func[b].let; b++)
				{
					if (format[a] == func[b].let)
					{
						t += func[b].f(valist);
						break;
					}
				}
				if (!func[b].let)
					return (-1);
			}
			else
			{
				write(1, &format[a], 1);
				t++;
			}
		}
		va_end(valist);
		return (t);
	}
	return (-1);
}
