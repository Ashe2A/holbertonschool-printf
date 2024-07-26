#ifndef PRINTPUT_FUNCTIONS
#define PRINTPUT_FUNCTIONS
#include <stdarg.h>

/**
 * struct percent_indicator - Percent indicator
 *
 * @type: The character following the percent sign
 * @pfunc: The function associated with the character
 *
 * Description: Find which function to call
 * depending on the character following a percent sign
 * (c for character and s for string)
 */
typedef struct percent_indicator
{
	char type;
	int (*pfunc)(va_list);
} pct_t;

int _printf(const char *, ...);
int print_all(pct_t[], va_list, char *);

int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int print_percent(va_list);

int _putchar(char);

#endif
