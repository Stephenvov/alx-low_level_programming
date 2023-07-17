#include <stdio.h>
/**
 * main - Entry
 * Description: a-z except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char x = 'a';

	while (x != '{')
	{
		if (x == 'p' || x == 'e')
		{
			x++;
		}
		else
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
