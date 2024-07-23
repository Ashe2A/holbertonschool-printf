#include <stdio.h>
#include "main.h"

/**
 * main - Test what stdio's printf does when inputs aren't used correctly
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	printf("www%"); /* ending percent with chars before */
	printf("%www"); /* starting percent with chars after */
	printf("%"); /* starting-ending percent */
	printf("www%www"); /* middle percent */

	/* same with double percent */
	printf("www%%");
	printf("%%www");
	printf("%%");
	printf("www%%www");

	return (0);
}