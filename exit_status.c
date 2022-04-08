#include "main.h"
/**
 * exit_status - exit with status read as command.
 * @args: status in string format to be converted to an integer.
 * Return: -1 when status is an ilegal number 0 otherwise.
 */

int exit_status(char **args)
{
	int status = 0;

	if (args[1] != NULL)
	{
		status = _atoi(args[1]);

		if (args[1][0] >= '0' && args[1][0] <= '9')
		{
			free(args[0]);
			free(args);
			exit(status);
		}
		else
		{
			perror(args[1]);
			free(args);
			return (-1);
		}
	}
	else
	{
		free(args[0]);
		free(args);
		exit(0);
	}
}