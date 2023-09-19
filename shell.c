#include "shell.h"
/**
 * main - void
 *
 * Return: always 0 on success
 */
int main(void)
{
	char venom[180];

	while (1)
	{
		output_prompt();
		exec_code(venom);
		get_my_input(venom, sizeof(venom));
	}
	return (0);
}
