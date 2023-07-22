#include "main.h"
/**
 * print_numbers - Entry
 * Description: printing from 0 - 9
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
