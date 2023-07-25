#include "main.h"
/**
 * _puts - printing string
 * @str: vaiable for string 
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
