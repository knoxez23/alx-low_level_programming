#include "variadic_functions.h"

/**
 * print_char - prints character
 * @args: ...
 *
 * Return: void
 */

void print_char(va_list args)
{
	char c = (char) va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - prints integer
 * @args: ...
 *
 * Return: void
 */

void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float - prints float
 * @args: ...
 *
 * Return: void
 */

void print_float(va_list args)
{
	float f = (float) va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - print string
 * @args: ...
 * Return:void
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char*);

	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *fmt = format;

	va_start(args, format);

	while (*fmt != '\0')
	{
		if (*fmt == 'c')
		{
			print_char(args);
		}
		else if (*fmt == 'i')
		{
			print_int(args);
		}
		else if (*fmt == 'f')
		{
			print_float(args);
		}
		else if (*fmt == 's')
		{
			print_string(args);
		}
		fmt++;

		if (*fmt != '\0')
		{
			printf(", ");
		}
	}

	va_end(args);

	printf("\n");
}
