#include <stdarg.h>
#include "holberton.h"

/**
 * _putchar_c - prints a character, char input.
 * @c: character input.
 * Return: void
 */

void _putchar_c(char c)
{
        write(1, &c, 1);
}

/**
 * _putchar - prints a character, va_list input.
 * @a: va_list input.
 * Return: void
 */

void _putchar(va_list a)
{
        char c;

        c = va_arg(a, int);
        write(1, &c, 1);
}

/**
 * print_str - prints string.
 * @a: input string.
 * Return: void
 */

void print_str(va_list a)
{
        char *c;

        c = va_arg(a, char *);
        while (*c != '\0')
        {
                _putchar_c(*c++);
        }
}

/**
 * print_unit - prints unsigned int.
 * @n: int input.
 * Return: void
 */

void print_uint(unsigned int n)
{
        if (n / 10 != 0)
                print_uint(n / 10);
        _putchar_c((n % 10) + '0');
}

/**
 * print_int - prints int.
 * @a: input.
 * Return: void
 */

void print_int(va_list a)
{
        int n;

        n = va_arg(a, int);
        if (n < 0)
        {
                _putchar_c('-');
                n = -n;
        }
        print_uint((unsigned int) n);
}
