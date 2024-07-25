#include "main.h"
#include <stddef.h>
#include <stdlib.h>

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
 * print_int - print an integer
 * @args: prints a arguments
 *
 * Return: number of digits
 */
int print_int(va_list args)
{
	int cpt, arg;

	arg = va_arg(args, int);

	if (arg != 0)
	{
		for (cpt = 0; itoa(arg) != '\0'; cpt++)
		{
			_putchar(itoa(arg)[cpt]);
		}
		return (cpt);
	}
	_putchar('0');
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
