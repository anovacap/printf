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
	while (format[i] != '\0')
	{
		get_sel(format)(args);
		i++;
	}
