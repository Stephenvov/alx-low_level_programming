#include <stdio.h>
/**
 * main - Entry
 * Description: a-z
 * Return: 0 (success)
 */
int main(void)
{
	char x = 'a';

	while (x == 'A')
	{
		putchar(x);
		x++;
	}
	putchar(' ');
	return (0);
}
