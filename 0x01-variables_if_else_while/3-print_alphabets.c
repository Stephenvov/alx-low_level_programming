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

	while (x != 'z')
	{
		putchar(x);
		x++;
	}
	putchar('z');
	do {
		putchar(y);
		y++;
	} while (y != 'Z')
	return (0);
}
