#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * op_c - character specifier and print
 * @ap: argument pointer
 *
 * Return: count
 */
int op_c(va_list ap)
{
	int count = 0;

	_putchar(va_arg(ap, int));
	count++;
	return (count);
}

/**
 * op_s - string specifier and print
 * @ap: argument pointer
 *
 * Return: count
 */
int op_s(va_list ap)
{
	int i = 0;
	char *str;
	int count = 0;

	str = va_arg(ap, char*);
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}

/**
 * op_p - % specifier and print
 * @ap: argument pointer
 *
 * Return: count
 */
int op_p(va_list ap)
{
	int count = 0;

	_putchar(va_arg(ap, int));
	count++;
	return (count);
}

/**
 * op_d - digit specifier and print
 * @ap: argument pointer
 *
 * Return: count
 */
int op_d(va_list ap)
{
	int count = 0;
	int mod = 1;
	int d;
	unsigned int di;

	d = va_arg(ap, int);
	if (d < 0)
	{
		_putchar('-');
		di = d * -1;
		count++;
	}
	else
		di = d;
	while (di / mod > 9)
	{
		mod = mod * 10;
	}
	while (mod > 0)
	{
		_putchar(di / mod + '0');
		di = di % mod;
		mod = mod / 10;
		count++;
	}
	return (count);
}
