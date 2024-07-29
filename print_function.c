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
	int cpt, rev_cpt, arg, arg_tmp;
	char *int_str;

	arg = va_arg(args, int);
	if (arg == 0)
	{
		_putchar('0');
		return (1);
	}
	arg_tmp = abs(arg);
	if (arg < 0)
		_putchar('-');
	for (cpt = 0; arg_tmp != 0; cpt++)
		arg_tmp = arg_tmp / 10;
	int_str = malloc(sizeof(char) * cpt);
	arg_tmp = abs(arg);
	for (rev_cpt = 0; rev_cpt < cpt; rev_cpt++)
		int_str[(cpt - 1) - rev_cpt] = (arg_tmp % 10) + '0';
	for (cpt = 0; int_str[cpt] != '\0'; cpt++)
		_putchar(int_str[cpt]);
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
 *
 * Return: Always 1 (a character is 1 of length)
 */
int print_percent(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
