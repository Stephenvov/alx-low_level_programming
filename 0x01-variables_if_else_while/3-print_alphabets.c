#include <stdio.h>
/**
 * main - Entry
 * Description: a-z A-Z
 * Return: 0 (success)
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x != '{')
	{
		putchar(x);
		x++;
	}
	do {
		putchar(y);
		y++;
	} while (y != '[');
	putchar('\n');
	return (0);
}
