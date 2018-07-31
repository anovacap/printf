#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

typedef struct format_specifiers
{
	char *spec;
	int (*f)();
} fs;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_sel(char *s))(va_list ap);
void op_c(va_list ap);
void op_s(va_list ap);
void op_p(va_list ap);


#endif
