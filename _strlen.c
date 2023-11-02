#include "main.h"

/**
* _strlen - Function that print strings
* @s: String to be evaluated
* Return: lenght of string
*/
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
return (len);
}



