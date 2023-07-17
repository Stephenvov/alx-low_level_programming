#include <stdio.h>
/**
 * main - Entry
 * Description: a-z
 * Return: 0 (success)
 */
int main(void)
{
	char x = 'a';

	while (x < 'z')
	{
		putchar(x);
		x++;
		putchar(x);
		x++;
	}
	return (0);
}
