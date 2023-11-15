#include "main.h"
/**
* _token_count - Function that counts the number of tokens
* @s: The string to be evaluated
* Return: Returns the number of tokens
**/
int _token_count(char *s)
{
	int argc;
	char *tokens, *s_copy;

	argc = 0;
	s_copy = strdup(s);
	if (s_copy == NULL)
	{
		return (0);
	}

	tokens = strtok(s_copy, DELIM);
	while (tokens != NULL)
	{
		argc++;
		tokens = strtok(NULL, DELIM);
	}
	free(s_copy);
	return (argc);

}

/**
* _tokenizer - Function that counts the number of tokens
* @s: The string to be tokenized
* @argc: Then number of tokens
* You must free argv and all it sub members
* Return: Returns the number of tokens
**/
char **_tokenizer(char *s, int argc)
{
	char *tokens, **argv;
	int i, j;

	i = 0;
	j = 0;
	argv = malloc(sizeof(char *) * argc);
	if (argv == NULL)
	{
		return (0);
	}

	tokens = strtok(s, DELIM);
	while (tokens != NULL)
	{
		argv[i] = strdup(tokens);

		if (argv[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(argv[j]);
			}
			free(argv);
			return (0);
		}
		tokens = strtok(NULL, DELIM);
		i++;

	}
	if (i < argc)
	{
		for (j = 0; j < i; j++)
		{
			free(argv[j]);
		}
		free(argv);
		return (0);
	}
	return (argv);
}

