#ifbdef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct select - selects the correct type to print
 *
 * @sel: the selector
 * @f: the function associated with selection
 */
typedef struct select
{
	char *sel;
	int (*f)();
} sel_tp;
void  _putchar(char c);
int _printf(const char *format, ...);
int (*get_sel(char *s)(*va_list);
#endif
