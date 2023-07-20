#include "main.h"
/**
 * jack_bauer - Entry
 * Description: print_last_digit
 * Return: 0
 */
void jack_bauer(void)
{
	while (x < 24)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar(x);
			_putchar(':');
			if (i < 10)
			{
				_putchar('0');
				_putchar(i);
			}
			else
			{
				_putchar(i);
			}
			_putchar('\n');
		}
		x++;
		i = 0;
	}
}
