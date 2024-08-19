#include "main.h"
#include <stddef.h>
#include <stdio.h>
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
	int cpt = 0;
	int arg = va_arg(args, int);
	int arg_tmp = arg;
	int i = 0;
	char *int_str;

	if (arg_tmp == 0)
	{
		_putchar('0');
		return (1);
	}
	while (arg_tmp != 0)
	{
		arg_tmp /= 10;
		cpt++;
	}
	if (arg < 0)
	{
		cpt++;
		int_str = malloc(sizeof(char) * cpt);
		int_str[0] = '-';
	}
	else
		int_str = malloc(sizeof(char) * cpt);
	while (arg != 0)
	{
		int_str[cpt - 1 - i] = (arg % 10) + '0';
		arg /= 10;
		i++;
	}
	for (i = 0; i < cpt; i++)
		_putchar(int_str[cpt - 1 - i]);
	free(int_str);
	return (cpt);
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
 * @list: arguments string (unused)
 *
 * Return: Always 1 (a character is 1 of length)
 */
int print_percent(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
