#include "shell.h"

/**
 * just_print - is a print function that prints the message
 * or command
 * @venom: string input
 */
void just_print(const char *venom)
{
	write(STDOUT_FILENO, venom, strlen(venom));
}
