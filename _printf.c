#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - string printing function
 * @format: string to print
 * @...: data to input within the format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int printed;
	va_list ipt_data;
	pct_t ipt_ind[] = {
		{'c', print_char},
		{'s', print_string},
		/* {'i', print_int},
		{'d', print_int}, */
		{'%', print_percent},
		{'\0', NULL}};

	if (format == NULL)
		return (0);
	printed = 0;
	va_start(ipt_data, format);
	printed = print_all(ipt_ind, ipt_data, format);
	va_end(ipt_data);
	return (printed);
}

/**
 * print_all - print each character and count them
 * @index: input indexes after percent sign
 * @data: list of parameters
 * @format: string to print
 *
 * Return: number of printed characters
 */
int print_all(pct_t index[], va_list data, char *format)
{
	int char_cpt, ipt_cpt;

	for (char_cpt = 0; format[char_cpt] != '\0'; char_cpt++)
	{
		if (format[char_cpt] == '%')
		{
			char_cpt++;
			for (ipt_cpt = 0; (index[ipt_cpt].type != '\0'); ipt_cpt++)
				if (format[char_cpt] == index[ipt_cpt].type)
				{
					printed += (index[ipt_cpt].pfunc)(data);
					break;
				}
			if (index[ipt_cpt].type == '\0')
			{
				_putchar('%');
				_putchar(format[char_cpt]);
				printed += 2;
			}
		}
		else
		{
			_putchar(format[char_cpt]);
			printed++;
		}
	}
	return (printed);
}
