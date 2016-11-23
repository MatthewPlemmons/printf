#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

void _putchar(va_list a)
{
	char c;

	c = va_arg(a, int);
	write(1, &c, 1);
}

void print_str(va_list a)
{
	char *c;

	c = va_arg(a, char *);
	while (*c != '\0')
	{
		putchar(*c);
	}
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

	cs_t cspec[] = {
		{'c', _putchar},
		{'s', print_str}
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
