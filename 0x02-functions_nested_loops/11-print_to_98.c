#include "main.h"
/**
 * print_to_98 - Entry
 * Description: print from n to 98
 * @n: number from function
 */
void print_to_98(int n)
{
	while (n > 99)
	{
		_putchar(n / 10 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	while (n <= 99)
	{
		if (n > -99 && n < -9)
		{
			_putchar('-');
			_putchar(-n / 10 + '0');
			_putchar(-n % 10 + '0');
		}
		else if (n > -10 && n < 0)
		{
			_putchar(-n + '0');
		}
		else if (n >= 0 && n <= 9)
		{
			_putchar(n + '0');
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
		n++;
	}
	_putchar('\n');
}
