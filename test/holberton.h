#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format_specifiers - creates structs that selects functions
 * @spec: types
 * @f: associated functions
 */
typedef struct format_specifiers
{
	char spec;
	int (*f)(va_list);
} fs;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_sel(char s))(va_list);
int op_c(va_list ap);
int op_s(va_list ap);
int op_p(va_list ap);
int op_d(va_list ap);

#endif /* _HOLBERTON_H_ */
