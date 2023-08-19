#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: zero.
 */
int main(void)
{
	int j = 97;
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	while (j <= 102)
	{
		putchar(j);
		j++;
	}

	putchar(10);
	return (0);
}
