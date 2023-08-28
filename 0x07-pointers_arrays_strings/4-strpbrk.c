#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: string to search.
 * @accept: set of bytes to search for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 */
char *_strpbrk(char *s, char *accept)
{
	const char *scp, *accept2;

	for (scp = s; *scp != '\0'; ++scp)
	{
		for (accept2 = accept; *accept2 != '\0'; ++accept2)
		{
			if (*scp == *accept2)
				return ((char *)scp);
		}
	}
	return ((void *)0);
}
