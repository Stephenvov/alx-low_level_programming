#include "main.h"
/**
 * times_table - Entry
 * Description: print_time table
 * Return: 0
 */
void times_table(void)
{
	int x = 0;
	int i = 0;
	int y = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			i = i + x;
			y++;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
}
