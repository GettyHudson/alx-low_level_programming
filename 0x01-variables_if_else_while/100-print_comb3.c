#include <stdio.h>

/**
 * main -  Prints possible different combinations of two digits.
 *
 * Return: zero
 */
int main(void)
{
	int j;
	int i;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				if ((i == 56) && (j == 57))
					break;
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
