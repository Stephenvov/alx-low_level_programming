#include "main.h"
/**
 * times_table - Entry
 * Description: print_time table
 * Return: 0
 */
void times_table(void)
{
	int x = 0;
	int i;

	while (x < 10)
	{
		for (i = x; i > 9; i + x)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i)
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');

	}
}
