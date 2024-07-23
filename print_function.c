#include "main.h"

/**
 * print_char - print a character
 * @args: prints a arguments
 * Return: character
 */

int print_char(va_list args)
{
    char c;

    c = va_arg(args, int);
    return (_putchar(c));
}