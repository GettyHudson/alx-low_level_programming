#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: destination string.
 * @src: source string.
 * @n: maximum number of characters to concatenate.
 *
 * Return: pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp)
	temp++;

	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}

	*temp = '\0';

	return (dest);
}
