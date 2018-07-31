#include "holberton.h"
#include <stdarg.h>

/**
 * _printf -  produces output according to a format
 * @format: string that gives the format
 * Return: an integer
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
			format++;
			continue;
		}

		format++;

		count += (*get_sel(*format))(args);
		i++;
	}
	return (count);
}
