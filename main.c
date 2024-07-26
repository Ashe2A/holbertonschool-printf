#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * main - Printf tests
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int len, len2;

	len = _printf("8566644");
	len2 = printf("8566644");
	printf("NULL length (_printf):[%d, %i]\n", len, len);
	_printf("NULL length (_printf):[%d, %i]\n", len, len);
	printf("NULL length (printf):[%d, %i]\n", len2, len2);
	_printf("NULL length (printf):[%d, %i]\n", len2, len2);

	len = _printf("5");
	len2 = printf("5");
	printf("Percent length (_printf):[%d, %i]\n", len, len);
	_printf("Percent length (_printf):[%d, %i]\n", len, len);
	printf("Percent length (printf):[%d, %i]\n", len2, len2);
	_printf("Percent length (printf):[%d, %i]\n", len2, len2);

	len = _printf("0");
	len2 = printf("0");
	printf("Percent length (_printf):[%d, %i]\n", len, len);
	_printf("Percent length (_printf):[%d, %i]\n", len, len);
	printf("Percent length (printf):[%d, %i]\n", len2, len2);
	_printf("Percent length (printf):[%d, %i]\n", len2, len2);

	len = _printf("-681");
	len2 = printf("-681");
	printf("Percent length (_printf):[%d, %i]\n", len, len);
	_printf("Percent length (_printf):[%d, %i]\n", len, len);
	printf("Percent length (printf):[%d, %i]\n", len2, len2);
	_printf("Percent length (printf):[%d, %i]\n", len2, len2);

	len = _printf("-4");
	len2 = printf("-4");
	printf("Percent length (_printf):[%d, %i]\n", len, len);
	_printf("Percent length (_printf):[%d, %i]\n", len, len);
	printf("Percent length (printf):[%d, %i]\n", len2, len2);
	_printf("Percent length (printf):[%d, %i]\n", len2, len2);

	return (0);
}
