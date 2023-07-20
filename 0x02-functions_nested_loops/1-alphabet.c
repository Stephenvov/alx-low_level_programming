#include "main.h"
/**
 * Main - Entry
 * Description: print_alphabet (a-z)
 * Return: success 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x != '{')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
