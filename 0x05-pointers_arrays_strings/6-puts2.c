#include "main.h"

/**
 * puts2 - print every string character
 * @str
 *
 */
void puts2(char *s)
{
    int a;

    for (i = 0; s[i] != '\0'; i++)
    {
        while (i % 2 == 0)
        {
            _putchar(s[i]);
        }
    }

    _putchar('\n');
}
