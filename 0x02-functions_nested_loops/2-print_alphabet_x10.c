#include "main.h"
/**
 * print_alphabet_x10 - Entry
 * Description: printing a - z
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int i = 0;

	while (i < 10)
	{
		while (x != '{')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
		i = 0;
	}
}
