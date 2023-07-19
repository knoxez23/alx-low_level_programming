#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            if (j == 0)
            {
                _putchar('0');
            }
            else
            {
                if (result < 10)
                {
                    _putchar(' ');
                    _putchar(' '); /*Two spaces for single-digit numbers*/
                }
                else if (result >= 10 && result < 100)
                {
                    _putchar(' '); /*One space for two-digit numbers*/
                }

                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }

            if (j != 9)
            {
                _putchar(','); /*Print comma for all columns except the last one*/
                _putchar(' '); /*Print space after the comma*/
            }
        }
        _putchar('\n');
    }
}
