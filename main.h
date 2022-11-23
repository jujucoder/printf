#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);

typedef struct printer {
	char *specifer;
	void (*print)(va_list arg);
} printer;
#endif

