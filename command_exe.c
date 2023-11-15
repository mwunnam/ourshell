#include "main.h"
/**
* _command_exe - Function that execute a command
* @input: comman inputed
* @env: Enviroment variable
* Return: 0
**/
void _command_exe(char *input, char **env)
{
	int argc, run, status;
	pid_t child_pid;
	char **argv;
	if (is_emptyspace(input))
	{
		return;
	}
	trimer(input);
	argc = _token_count(input);
	argv = _tokenizer(input, argc);
	argv[0] = _command_path_checker(argv[0]);
	if (argv[0] == NULL)
	{
		_print("Command not found\n");
	/**	free(input);**/
/**		_free_tokens(argc, argv); **/
		return;
	}

		child_pid = fork();
		if (child_pid < 0)
		{
			_print("forking was not successful\n");
			free(input);
			_free_tokens(argc, argv);
		}
		else if (child_pid == 0)
		{
			run = execve(argv[0], argv, env);

			if (run == -1)
			{
				_print("command does not exist\n");
				exit(0);
			}
		}
		else
		{
			wait(&status);
			_free_tokens(argc, argv);
			return;
		}
}
