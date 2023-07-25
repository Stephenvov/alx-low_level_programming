#include "main.h"
/**
 * _strlen - get the length of a string;
 * @s: variable for string
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
