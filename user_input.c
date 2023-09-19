#include "shell.h"

/**
 * get_my_input - function that recieves the command
 * @venom: input string
 * @size: string size
 */
void get_my_input(char *venom, size_t size)
{
	if (fgets(venom, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			just_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			just_print("Error in input reading.\n");
			exit(EXIT_FAILURE);
		}
	}
	venom[strcspn(venom, "\n")] = '\0';
}
