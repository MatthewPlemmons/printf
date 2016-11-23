#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list a;
	int i, j, n;

	cs_t cspec[1] = {
		{'c', _putchar},
	};

	if (format == NULL)
		return (0);

	i = j = n = 0;
	va_start(a, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (j < 1)
			{
				if (format[i + 1] == cspec[j].cs)
				{
					cspec[j].f(a);
				}
				j++;
			}
		}
		i++;

	}
	return (0);
}
