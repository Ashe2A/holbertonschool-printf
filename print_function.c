#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - print a character
 * @args: prints arguments
 *
 * Return: Always 1 (1 character)
 */
int print_char(va_list args)
{
	char c; /* char needed if not cast */

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_int - print an integer
 * @args: prints arguments
 *
 * Return: number of digits
 */
int print_int(va_list args)
{
	int cpt = 1;
	int arg = va_arg(args, int);
	int arg_tmp = abs(arg);
	int i = 0;
	char *int_str;

	if (arg_tmp == 0)
	{
		_putchar('0');
		return (cpt);
	}
	while (arg_tmp != 0)
	{
		arg_tmp /= 10;
		cpt++;
	}
	int_str = malloc(sizeof(char) * cpt);
	while (arg_tmp != 0)
	{
		int_str[i] = (arg_tmp % 10) + '0';
		arg_tmp /= 10;
		i++;
	}
	if (arg < 0)
		_putchar('-');
	for (i = 0; i < cpt; i++)
		_putchar(int_str[cpt - 1 - i]);
	free(int_str);
	if (arg < 0)
		return (cpt + 1);
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
		_putchar(str[cpt]);
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
