#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - Entry point for the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int value = 0, i = 0;

	if (argc == 2)
	{
		value = atoi(argv[1]);
		if (value < 0)
		{
			printf("Error\n");
			exit(2);
		}
		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], value);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);
		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}
	return (0);
}
