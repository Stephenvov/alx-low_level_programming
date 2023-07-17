#include <stdio.h>
/**
 * main - Entry
 * Description: a-z
 * Return: 0 (success)
 */
int main(void)
{
	char x = 'a';

	while (x != '{')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
