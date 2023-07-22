#include "main.h"
/**
 * print_to_98 - Entry
 * Description: print from n to 98
 * @n: number from function
 * Return: 0;
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n > 99)
			{
				_putchar(n / 100 + '0');
				_putchar((n % 100) / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
