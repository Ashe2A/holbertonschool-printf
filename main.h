#ifndef PRINTPUT_FUNCTIONS
#define PRINTPUT_FUNCTIONS

int _printf(const char *string, ...);

int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent();

int _putchar(char character);

#endif

#ifndef PERCENT
#define PERCENT

typedef struct percent_indicator
{
    char percent_type;
	int (*print_function)(va_list arg_list);
} pct_t;

#endif
