#include "holberton.h"

/**
 *funcstruct - Selects function
 *@c: char
 *Return: Pointer to function
 */
int (*funcstruct(char c))(va_list)
{
        print_t func[] = {
                {'c', pc},
                {'s', ps},
                {'\0', NULL}
        };
        unsigned int i = 0;

        for (; func[i].let; i++)
        {
                if (c == func[i].let)
                {
                        return (func[i].f);
                }
        }
        return (NULL);
}
/**
 * _printf - print all types of data
 * @format: list of arguments to print
 * Return: t or -1
 */
int _printf(const char *format, ...)
{
        va_list valist;
        int t = 0, a;
	int(*f)(va_list);

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
				f = funcstruct(format[a + 1]);
				
				if (f)
				{
					t += f(valist);
					a++;
				}
				else
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

