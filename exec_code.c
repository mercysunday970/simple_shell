#include "shell.h"

/**
 * exec_code - function that executes the command
 * @executable_message: is the command to be excuted
 */
void exec_code(const char *venom)
{
	char path[205];
	char *args[5];
	const char *bin_dir = "/bin/";
	int k, l;

	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		for (k = 0; k < 205 && bin_dir[k] != '\0'; k++)
		{
			path[k] = bin_dir[k];
		}
		for (l = 0; k < 205 && venom[l] != '\0'; k++, l++)
		{
			path[k] = venom[l];
		}
		path[k] = '\0';

		args[0] = (char *)venom;
		args[1] = NULL;

		if (execve(path, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
