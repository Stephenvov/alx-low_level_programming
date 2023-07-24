#include "main.h"
/**
 * print_num - check priting, check if output is 2 digit or 3
 * @n: number from function
 */
void print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -(n);
	}
	if (n <= 9 && n >= 0)
	{
		_putchar(n + '0');
	}
	if (n <= 99 && n > 9)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 99)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
 * print_to_98 - Entry Description: print from n to 98
 * @n: number from function
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		print_num(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n >= 98)
	{
		if (n > 99)
			print_num(n);
		else
			print_num(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
	_putchar('\n');
}
