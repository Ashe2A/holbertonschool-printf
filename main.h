#ifndef PRINTPUT_FUNCTIONS
#define PRINTPUT_FUNCTIONS

int _printf(const char *string, ...);

int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent();

int _putchar(char character);

#endif

#ifndef PERCENT_STRUCTURE
#define PERCENT_STRUCTURE

#include <stdarg.h>

/**
 * struct percent_indicator - Percent indicator 
 *
 * @percent_type: The character following the percent sign
 * @f: The function associated with the character
 *
 * Description: Find which function to call
depending on the character following a percent sign
(c for character and s for string)
 */
typedef struct percent_indicator
{
    char percent_type;
	int (*print_function)(va_list arg_list);
} pct_t;

#endif
