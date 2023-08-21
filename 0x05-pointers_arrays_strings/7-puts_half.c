#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: String to be printed
 */
void puts_half(char *str)
{
    int length, n, i;

    length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    if (length % 2 == 0)
    {
        for (i = length / 2; str[i] != '\0'; i++)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        for (n = (length - 1) / 2 + 1; n < length; n++)
        {
            _putchar(str[n]);
        }
    }
    _putchar('\n');
}
