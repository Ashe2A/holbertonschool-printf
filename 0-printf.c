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
	int char_cpt, input_cpt, printed_chars;
	va_list input_data;
	pct_t input_list[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}};

	va_start(input_data, format);
	printed_chars = 0;

	for (char_cpt = 0; (format[char_cpt] != '\0')
	|| (format != NULL); char_cpt++)
	{
		if ((format[char_cpt] == '%'))
		{
			for (input_cpt = 0; (input_list[input_cpt].percent_type != '\0')
			|| (input_list[input_cpt].print_function != NULL); input_cpt++)
				if (format[char_cpt + 1] == input_list[input_cpt].percent_type)
					printed_chars += (input_list[input_cpt].print_function)(input_data);
			char_cpt++;
		}
		else if ((format[char_cpt] == '\\') && (format[char_cpt + 1] == '%'))
		{
			_putchar('%');
			char_cpt++;
		}
		else
			_putchar(format[input_cpt]);
		printed_chars++;
	}
	va_end(input_data);
	return (printed_chars);
}
