#include "main.h"
/**
 * _tokenizer - Function that spilts input into argv
 * @input: String to be manipulated
 * Return: argv with input slipt
 **/
char **_tokenizer(char *input)
{
	char *token, *input_copy, *delim, **argv;
	int argc, i;

	argc = 0;
	argv = NULL;
	delim = " ";
	i = 0;

	input_copy = _strdup(input);
	if (input_copy == NULL)
	{
		perror("strdup");
		return (0);
	}

	token = strtok(input_copy, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		argc++;
	}
	free(input_copy);

	argv = malloc(sizeof(char) * (argc + 1));
	if (argv == NULL)
	{
		perror("argv memory allocation");
		return (0);
	}
	token = strtok(input, delim);
	while (token != NULL)
	{
		argv[i] = _strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
return (argv);
}

