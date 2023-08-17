#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printe btwn strings
 * @n: n.o of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str != NULL)
		{
			while (*str != '\0')
			{
				_putchar(*str);
				str++;
			}
		}
		else
		{
			char *nil = "(nil)";

			while (*nil != '\0')
			{
				_putchar(*(nil));
				nil++;
			}
		}
		if (i < n - 1 && separator != NULL)
		{
			while (*separator != '\0')
			{
				_putchar(*separator);
				separator++;
			}
		}
	}
	va_end(args);
	_putchar('\n');
}
