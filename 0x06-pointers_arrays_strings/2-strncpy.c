#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*temp = '\0';
		temp++;
		n--;
	}

	return (dest);
}
