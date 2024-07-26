#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int ui;
	void *addr;

	len = _printf("printf a %%simple% sentence (%c, %s).\n", 'c', "String");
	len2 = printf("printf a %%simple% sentence (%c, %s).\n", 'c', "String");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
