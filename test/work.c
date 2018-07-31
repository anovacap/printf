#include "holberton.h"

/**
 *
 *
 *
 */
int (*get_sel(char s))(va_list)
{
	int i;
	fs format[] = {
		{'c', op_c},
		{'s', op_s},
		{'%', op_p}
	};

	i = 0;
	while (format[i].spec)
	{
		if (format[i].spec == s)
			return (format[i].f);
		i++;
	}
	return (0);
}
