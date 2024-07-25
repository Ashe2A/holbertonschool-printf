#ifndef PRINTPUT_FUNCTIONS
#define PRINTPUT_FUNCTIONS
#include <stdarg.h>

/**
 * struct percent_indicator - Percent indicator
 *
 * @percent_type: The character following the percent sign
 * @print_function: The function associated with the character
 *
 * Description: Find which function to call
 * depending on the character following a percent sign
 * (c for character and s for string)
 */
typedef struct percent_indicator
{
	char percent_type;
	int (*print_function)(va_list);
} pct_t;

int _printf(const char *, ...);

int print_char(va_list);
int print_string(va_list);
int print_percent(void);

int _putchar(char);

#endif
