#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int a, b;
	char s[] = "Dolly";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%c\n", 'A');
	_printf("%c\n", 'A');
	_printf("%");
	printf("%");
	a = _printf("hello %s\n", s);
	printf("%i\n", a);
	b = printf("hello %s\n", s);
	printf("%i\n", b);
	printf("%s", NULL);
	_printf("%s", NULL);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	return (0);
}
