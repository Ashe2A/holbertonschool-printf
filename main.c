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

	len = _printf("_Print a %%simple% sentence (%c, %s).\n", 'c', "String");
	len2 = printf("Print a %%simple% sentence (%c, %s).\n", 'c', "String");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf(NULL);
	len2 = printf(NULL);
	printf("NULL Length (printf):[%d, %i]\n", len, len);
	printf("NULL Length (_printf):[%d, %i]\n", len2, len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Percent Length (printf):[%d, %i]\n", len, len);
	printf("Percent Length (_printf):[%d, %i]\n", len2, len2);
	return (0);
}
