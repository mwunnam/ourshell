#include "main.h"


int main()
{
	char *input;
	size_t buffer;


	buffer = 0;
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

		_print(input);
	}
free(input);
return (0);
}


