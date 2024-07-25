#include "main.h"
#include <stddef.h>

/**
 * print_char - print a character
 * @args: prints a arguments
 *
 * Return: Always 1 (1 character)
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}

/**
 * print_string - print a string
 * @list: arguments string
 *
 * Return: Size of the string
 */

int print_string(va_list list)
{
	int cpt;
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');

		return (6);
	}

	for (cpt = 0; str[cpt] != '\0'; cpt++)
	{
		_putchar(str[cpt]);
	}

	return (cpt);
}

/**
 * print_percent - print percent
 *
 * Return: Always 1 (a character is 1 of length)
 */

int print_percent(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
