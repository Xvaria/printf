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
                {'\0', NULL}
        };
        va_list valist;
        int t = 0, a, b;

	va_start(valist, format);
        if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (a = 0; format[a]; a++)
	{
		if (format[a] == '%')
		{
			if (format[a + 1] == '%')
			{
				write(1, &format[a], 1);
				t++;
				a++;
			}
			else
			{
				for (b = 0; func[b].let; b++)
				{
					if (format[a + 1] == func[b].let)
					{
						t += func[b].f(valist);
						a++;
						break;
					}
				}
				if (!func[b].let)
				{
					write(1, &format[a], 1);
					t++;
				}
			}
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
