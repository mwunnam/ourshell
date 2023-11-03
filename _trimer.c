#include "main.h"

/**
 * trimer - Function that removes trailing whitespace
 * @s: string to be evaluated
 * Return: Nothing
 **/

void trimer(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i >= 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		s[i] = '\0';
		i--;
	}

}
