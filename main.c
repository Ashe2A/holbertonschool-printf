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

	len = _printf("_Print a %%simple sentence (%d, %i, %d, %i, %d, %i).\n", 444, 19, -14, -512, 0, 0);
	len2 = printf(" Print a %%simple sentence (%d, %i, %d, %i, %d, %i).\n", 444, 19, -14, -512, 0, 0);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
