#include "main.h"
/**
 * print_alphabet - Entry
 * Description: printing a - z
 * Return: 0 (success)
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
