#include "main.h"


int main()
{
	char *input;
	size_t buffer;
	pid_t child_pid;
	int status;

	buffer = 0;
	status = 0;

	input = NULL;

	while (1)
	{
		_print("$ ");
		fflush(stdout);
		if (getline(&input, &buffer, stdin) == -1)
		{
			free(input);
			return (0);
		}

		child_pid = fork();
		if (child_pid == 0)
		{
			_print("I Am the child here\n");
		}
		wait(&status);
	}
free(input);
return (0);
}


