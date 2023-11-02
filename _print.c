#include "main.h"

/**
* _print - Function that print strings
* @s: String to be printed
* Return: lenght of string
*/

int _print(char *s)
{
	size_t written;

	written = write(1, s, (size_t)_strlen(s));
return (written);
}


