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
		putchar("%d", x);
		x++;
	}
	putchar("z");
	do {
		putchar("%d", y);
		y++;
	} while (y != 'Z')
	return (0);
}
