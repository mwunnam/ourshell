#include "main.h"
/**
* is_emptyspace - Entry point of my shell
* @s: arguemnt count
* Return: 1
**/

int is_emptyspace(const char *s)
{
	while (*s)
	{
		if (!((*s >= 9 && *s <=13) || *s == 32))
		{
			return (0);
		}
		s++;
	}
	return (1);
}
