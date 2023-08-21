#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
