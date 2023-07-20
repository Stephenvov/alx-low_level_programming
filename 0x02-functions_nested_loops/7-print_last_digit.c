#include "main.h"
/**
 * print_last_digit - Entry
 * Description: print_last_digit
 * @x: input value
 * Return: 0
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -(x % 10);
	}
	else if (x < 10)
	{
		y = x;
	}
	else
	{
		y = x % 10;
	}
		_putchar('0' + y);
		return (y);
}
