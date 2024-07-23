#include "main.h"
#include <stdarg.h>

/**
 * _printf - string printing function
 * @format: string to print
 * @...: data to input within the format string
 *
 * Return: Always 0 (SUCCESS)
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list input_data;
	pct_t input_list[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}};

	va_start(input_data, format);

	for (i = 0; (format[i] != '\0') || (format != NULL); i++)
	{
		if ((format[i] == '%'))
		{
			for (j = 0; (input_list[j].percent_type != '\0')
			&& (input_list[j].print_function != NULL); j++)
			{
				if (format[i + 1] == input_list[j].percent_type)
				{
					(input_list[j].print_function)(input_data);
				}
			}
		}
	}
}