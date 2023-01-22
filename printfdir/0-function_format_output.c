#include "printf.h"

/**
 * func _printf - prints strings and chars
 */

int _printf(const char *format, ...)
{
	output_form output_format[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_percent},
		{NULL, NULL}};

	va_list list;
	int count = 0;

	va_start(list, format);
	count = func_match(format, list, output_form);
	
	va_end(list);

	return (count);
}
