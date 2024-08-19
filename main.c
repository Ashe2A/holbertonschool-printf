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

	len = _printf("_Print a %%simple sentence (%c, %s, %d, %i, %d, %i, %d, %i, %s).\n", 'c', "String", 444, 19, -14, -512, 0, 0, "");
	len2 = printf("Print a %%simple sentence (%c, %s, %d, %i, %d, %i, %d, %i, %s).\n", 'c', "String", 444, 19, -14, -512, 0, 0, "");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf(NULL);
	len2 = printf(NULL);
	printf("NULL length (_printf):[%d, %i]\n", len, len);
	printf("NULL length (printf):[%d, %i]\n", len2, len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Percent length (_printf):[%d, %i]\n", len, len);
	printf("Percent length (printf):[%d, %i]\n", len2, len2);
	return (0);
}
