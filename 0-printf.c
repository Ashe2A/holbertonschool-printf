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
	int char_cpt, ipt_cpt, printed; /* ipt_cpt = input counter */
	/* printed = number printed characters */
	va_list ipt_data;
	pct_t ipt_ind[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}};

	va_start(ipt_data, format);
	printed = 0;
	if (format != NULL)
	{
		for (char_cpt = 0; format[char_cpt] != '\0'; char_cpt++)
			if (format[char_cpt] == '%')
			{
				for (ipt_cpt = 0; (ipt_ind[ipt_cpt].type != '\0'); ipt_cpt++)
					if (format[char_cpt] == ipt_ind[ipt_cpt].type)
					{
						printed += (ipt_ind[ipt_cpt].pfunc)(ipt_data);
						char_cpt++;
					}
				if (ipt_ind[ipt_cpt].type == '\0')
				{
					char_cpt++;
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
	va_end(ipt_data);
	return (printed);
}
