#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_digit_string(const char *str)
{
    for (size_t i = 0; i < strlen(str); ++i)
    {
        if (!isdigit(str[i]))
	{
            return (false);
        }
    }
    return true;
}

void print_error_exit()
{
    printf("Error\n");
    exit(98);
}

char* multiply_strings(const char *str1, const char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int total_len = len1 + len2;

    char *result = calloc(total_len + 1, sizeof(char));

    if (result == NULL)
    {
        print_error_exit();
    }

    for (int i = len1 - 1; i >= 0; --i)
    {
        int carry = 0;

        for (int j = len2 - 1; j >= 0; --j)
	{
            int product = (str1[i] - '0') * (str2[j] - '0') + carry + result[i + j + 1] - '0';

            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        result[i] += carry;
    }

    return (result);
}

int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit_string(argv[1]) || !is_digit_string(argv[2]))
    {
        print_error_exit();
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    char *result = multiply_strings(num1, num2);

    int i = 0;

    while (result[i] == '0')
    {
        ++i;
    }

    if (result[i] == '\0')
    {
        printf("0\n");
    }
    else
    {
        printf("%s\n", result + i);
    }

    free(result);

    return (0);
}


