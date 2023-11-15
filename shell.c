#include "main.h"
/**
* main - Entry point of my shell
* @argc: arguemnt count
* @env: evironment variables
* Return: 0
**/
int main(int argc, char **env)
{
	char *input;
	size_t buffer;

	buffer = 0;
	input = NULL;
	(void)argc;

	while (1)
	{
		if (isatty(0))
		_print("$ ");
		fflush(stdout);
		if (getline(&input, &buffer, stdin) == -1)
		{
			free(input);
			return (0);
		}
		_command_exe(input, env);
	}
free(input);
return (0);
}
