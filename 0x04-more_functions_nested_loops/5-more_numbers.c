#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, repeated 10 times.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	i	for (i = 0; i <= 14; i++)
		{
	if (i > 9) /* Print the first digit for numbers greater than 9 */
		_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
	}
	_putchar('\n'); /* Print newline after each sequence */
	}
}
