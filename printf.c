#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_va_args - matches the conversion specifier to the correct
 * fucntion for printing the variable argument.
 * @c: conversion specifier.
 * @a: variable argument list.
 * Return: int, number of characters printed.
 */

int print_va_args(char c, va_list a)
{
	int i;

	cs_t cspec[] = {
		{'c', _putchar},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
	};

	for (i = 0; i < 4; i++)
	{
		if (cspec[i].cs == c)
			return (cspec[i].f(a));
	}
	return (_putchar_c(c));
}


/**
 * _printf - prints output according to a format.
 * @format: input string.
 * Return: int, number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list a;
	int i, count;

	if (format == NULL)
		return (0);

	count = 0;
	va_start(a, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			count += print_va_args(format[i + 1], a);
			i++;
		}
		else
			count += _putchar_c(format[i]);
	}
	va_end(a);
	return (count);
}
