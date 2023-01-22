#ifndef PRINT_H
#define PRINT_H

#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct output_form
{
	char *form;
	int (*func)(va_list list);
} output_form;

int _printf(const char *format, ...);
int _putchar(char c);
int func_string(va_list);
int func_char(va_list);
int func_percent(va_list);
int func_match(const char *, va_list, output_form output_format[]);

#endif

