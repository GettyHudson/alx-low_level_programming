#include "main.h"

/**
 * print_last_digit - last digit of a number.
 * @n: the value of the number
 *
 * Return: zero
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	m = n % 10;
	if (m < 0)
		m = -m;
	_putchar(m + 48);
	return (m);
}
