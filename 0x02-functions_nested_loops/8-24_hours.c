#include "main.h"
/**
 * jack_bauer - Entry
 * Description: print_last_digit
 * Return: 0
 */
void jack_bauer(void)
{
	int x = 0;
	int i;

	while (x < 24)
	{
		for (i = 0; i < 60; i++)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x + '0');
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			_putchar(':');
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar('\n');
		}
		x++;
		i = 0;
	}
}
