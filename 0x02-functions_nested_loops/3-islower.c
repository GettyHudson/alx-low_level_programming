#include "main.h"

/**
 * _islower - for lowercase character.
 * @c: The character to check
 *
 * Return: On success 1, otherwise zero.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
