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

int op_c(va_list ap)
{
	int count = 0;
	_putchar(va_arg(ap, int));
	count++;
	return (count);
}

int op_s(va_list ap)
{
	int i = 0;
	char *str;
	int count = 0;

	str = va_arg(ap, char*);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}

int op_p(va_list ap)
{
	int count = 0;
	_putchar(va_arg(ap, int));
	count++;
	return (count);
}
int op_d(va_list ap)
{
	int count = 0;
	int mod = 1;
	int i = 0;
	if (ap < 0)
	{
		putchar('-');
		ap = ap * -1;
		count++;
	}
	else
	{
		while (ap / mod > 9)
		{
			mod = mod * 10;
		}
		while (mod > 0)
		{
			putchar(ap / mod + '0');
			ap = ap % mod;
			mod = mod / 10;
			count++;
		}
	}
	return (count);
}
