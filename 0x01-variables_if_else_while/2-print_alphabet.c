#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar(10);

	return (0);
}
