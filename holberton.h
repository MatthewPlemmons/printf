#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct Cspecs {
	char cs;
	void (*f)(va_list);
} cs_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
