#include "holberton.h"

/**
 *
 *
 *
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
	return (0);
}
