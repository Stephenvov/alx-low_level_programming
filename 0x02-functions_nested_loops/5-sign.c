#include "main.h"
/**
 * print_sign - entry
 * @n: Description of parameter c
 * Description: check if islower
 * Return: 0
*/
int print_sign(int n)
{
	int x = n;

	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
