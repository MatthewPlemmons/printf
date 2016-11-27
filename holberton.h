#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct Cspecs {
	char cs;
	int (*f)();
} cs_t;

int _putchar_c(char c);
int _putchar(va_list a);
int print_str(va_list a);
int print_uint(unsigned int i);
int print_int(va_list a);
int print_va_args(char c, va_list a);
int _printf(const char *format, ...);

#endif
