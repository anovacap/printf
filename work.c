#include "holberton.h"

/**
 * get_sel - selects function for _printf
 * @s: type identifier
 * Return: integer
 */
int (*get_sel(char s))(va_list)
{
	int i;
	fs format[] = {
		{'c', op_c},
		{'s', op_s},
		{'%', op_p},
		{'d', op_d},
		{'i', op_d},
		{'\0', NULL}
	};

	i = 0;
	while (format[i].spec != '\0')
	{
		if (format[i].spec == s)
			return (format[i].f);
		i++;
	}
	return (0);
}
