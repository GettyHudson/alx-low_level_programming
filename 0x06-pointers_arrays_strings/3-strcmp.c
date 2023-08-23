#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: integer less than, equal to, or greater than 0,
 *         according to whether the first string is less than,
 *         equal to, or greater than the second string.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}
