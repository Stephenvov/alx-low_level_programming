#include "main.h"
/**
 * print_rev - print in reverse string
 * @s: normal string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
	}
	for (i = i - 1; i > 0; i--)
	{
		_putchar(*s[i]);
	}
	_putchar('\n');
}
