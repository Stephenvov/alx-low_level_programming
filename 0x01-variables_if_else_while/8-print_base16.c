#include <stdio.h>
/**
 * main - Entry
 * Description: 0-9
 * Return: 0 (success)
 */
int main(void)
{
	char x[] = "0123456789abcdef";
	int y = 0;

	while (y != 17)
	{
		putchar(x[y]);
		y++;
	}
	return (0);
}
