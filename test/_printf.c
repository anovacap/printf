#include "holberton.h"

/**
 * _printf -  produces output according to a format
 * @format: string that gives the format
 * Return: an integer
 */
int _printf(const char *format, ...);
{
	int i = 0;
	va_list args;

	va_start(format, args);
	while (*format != '\0')
	{
		if (*format != '\0')
			count++;

		if (*format != '%')
		{
			_putchar(*format);
			format++;
			continue;
		}

		format++;
		get_sel(format)(args);
		i++;
	}

}
