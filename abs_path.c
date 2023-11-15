#include "main.h"

/**
* _command_path_checker - Function checks for absolute path
*			if it doesn't it is add to the command
* @argv: arv[0]
* Return: absoulute path
**/

char *_command_path_checker(char *argv)
{
	char *path, *path_copy, *loc_token, *command_loc;
	size_t command_loc_size;

	if (strchr(argv, '/') == NULL)
	{
		path = getenv("PATH");
		path_copy = _strdup(path);

		loc_token = strtok(path_copy, ":");

		while (loc_token != NULL)
		{
			command_loc_size = _strlen(loc_token) + _strlen(argv) + 2;
			command_loc = malloc(command_loc_size);
			if (command_loc == NULL)
			{
				free(path_copy);
				return (0);
			}
			strcpy(command_loc, loc_token);
			strcat(command_loc, "/");
			strcat(command_loc, argv);

			if (access(command_loc, X_OK) == 0)
			{
				free(path_copy);
				return (command_loc);
			}
			free(command_loc);
			loc_token = strtok(NULL, ":");
		}
	free(path_copy);
	return (NULL);
	}
return (argv);
}
