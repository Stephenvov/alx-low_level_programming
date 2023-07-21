#include "main.h"
/**
 * print_to_98 - Entry
 * Description: print from n to 98
 * @n: number from function
 * Return: 0;
 */
void print_to_98(int n)
{
	while (n > 98 || n < 99)
	{
		if (n > 99)
		{
			_putchar(n / 100 + '0');
			_putchsr((n % 100) % 10 + '0');
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
		else
		{
			 _putchar('\n');
		}
		if (n > 99)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
}
