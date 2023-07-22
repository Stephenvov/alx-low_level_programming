#include "main.h"
/**
 * _isdigit - Entry
 * Description: checking is digit
 * @c: input value
 * Return: 0 success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
	_putchar(':');
	_putchar(' ');
	_putchar('\n');
}
