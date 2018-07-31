#include <unistd.h>
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
	return (0);
}

void op_c(va_list ap)
{
	_putchar(ap);
}

int op_s(va_list ap)
{
	int i = 0;
	int count = 0;
	while (ap[i] != '\0')
	{
		_putchar(ap[i]);
		count++;
		i++;
	}
	return(count);
}

void op_p(va_list ap)
{
	_putchar(ap);
}
