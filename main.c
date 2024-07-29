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

	len = _printf("_LPI %d et %i\n", 8566644, 8566644);
	len2 = printf("LPI %d et %i\n", 8566644, 8566644);
	printf("Long positive int (_printf):[%d, %i]\n", len, len);
	_printf("_Long positive int (_printf):[%d, %i]\n", len, len);
	printf("Long positive int (printf):[%d, %i]\n", len2, len2);
	_printf("_Long positive int (printf):[%d, %i]\n", len2, len2);

	len = _printf("_SPI %d et %i\n", 5, 5);
	len2 = printf("SPI %d et %i\n", 5, 5);
	printf("Short positive int (_printf):[%d, %i]\n", len, len);
	_printf("_Short positive int (_printf):[%d, %i]\n", len, len);
	printf("Short positive int (printf):[%d, %i]\n", len2, len2);
	_printf("_Short positive int (printf):[%d, %i]\n", len2, len2);

	len = _printf("_Z %d et %i\n", 0, 0);
	len2 = printf("Z %d et %i\n", 0, 0);
	printf("Zero (_printf):[%d, %i]\n", len, len);
	_printf("_Zero (_printf):[%d, %i]\n", len, len);
	printf("Zero (printf):[%d, %i]\n", len2, len2);
	_printf("_Zero (printf):[%d, %i]\n", len2, len2);

	len = _printf("_LNI %d et %i\n", -681, -681);
	len2 = printf("LNI %d et %i\n", -681, -681);
	printf("Long negative int (_printf):[%d, %i]\n", len, len);
	_printf("_Long negative int (_printf):[%d, %i]\n", len, len);
	printf("Long negative int (printf):[%d, %i]\n", len2, len2);
	_printf("_Long negative int (printf):[%d, %i]\n", len2, len2);

	len = _printf("_SNI %d et %i\n", -4, -4);
	len2 = printf("SNI %d et %i\n", -4, -4);
	printf("Short negative int (_printf):[%d, %i]\n", len, len);
	_printf("_Short negative int (_printf):[%d, %i]\n", len, len);
	printf("Short negative int (printf):[%d, %i]\n", len2, len2);
	_printf("_Short negative int (printf):[%d, %i]\n", len2, len2);

	return (0);
}
