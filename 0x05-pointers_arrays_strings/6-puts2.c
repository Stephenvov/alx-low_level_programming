#include "main.h"
/**
 * _puts2 - printing string
 * @str: vaiable for string
 */
void _puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str + 2;
	}
	_putchar('\n');
}
