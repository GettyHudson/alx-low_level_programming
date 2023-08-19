#include <stdio.h>

/**
 * main -  all possible different
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (((i != j) && (j != k)) && ((i < j) && (j < k)))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == 55) && (j == 56) && (k == 57))
						break;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
