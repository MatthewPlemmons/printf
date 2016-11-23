#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct Cspecs {
	char cs;
	void (*f)();
} cs_t;

void _putchar_c(char c);
void _putchar(va_list a);
void print_str(va_list a);
int _printf(const char *format, ...);

#endif
