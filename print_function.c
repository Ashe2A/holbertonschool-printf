#include "main.h"
#include <stddef.h>

/**
 * print_char - print a character
 * @args: prints a arguments
 * Return: character
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_string - print a string
 * @list: arguments string
 * Return: cpt
 */

int print_string(va_list list)
{
	int cpt, len = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		len = len + _putchar('(');
		len = len + _putchar('n');
		len = len + _putchar('u');
		len = len + _putchar('l');
		len = len + _putchar('l');
		len = len + _putchar(')');
	}
	else
	{
		for (cpt = 0; str[cpt] != '\0'; cpt++)
		{
			_putchar(str[cpt]);
			len++;
		}
	}
	return (len);
}

/**
 * print_percent - print percent
 * Return: percent
 */

int print_percent(void)
{
	_putchar('%');
	return (1);
}
