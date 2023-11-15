#include "main.h"

/**
* _free_tokens - Function that frees all tokens allocated
* @argc: number of tokens;
* @argv: array containing tokens;
* Retun: void
**/

void _free_tokens(int argc, char **argv)
{
	int i;

	i = 0;

	for (i = 0; i < argc; i++)
	{
		free(argv[i]);

	}
free(argv);
}
