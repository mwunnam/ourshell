#include "main.h"

/*
 * _strdup - Function that duplicates a string
 * @s: string to be duplicated
 * Return: Pointer to the new string
 **/

char *_strdup(const char *s)
{
	char *strdup;
	int i, len;

	i = 0;
	len = 0;

	if (s == NULL)
		return (NULL);


	while (s[len] != '\0')
	{
		len++;
	}

	strdup = malloc(sizeof(char) * (len + 1));
	if (strdup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		strdup[i] = s[i];

	strdup[i] = '\0';

return (strdup);
}
