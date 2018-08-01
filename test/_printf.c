#include "holberton.h"
#include <stdarg.h>

/**
 * _printf -  produces output according to a format
 * @format: string that gives the format
 * Return: an integer
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (!format)
		return (-1);

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

		if (*format == '\0')
		{
			_putchar('%');
			_putchar('\n');
			break;
		}

		count += (*get_sel(*format))(args);
		format++;
	}
	va_end(args);
	return (count);
}
