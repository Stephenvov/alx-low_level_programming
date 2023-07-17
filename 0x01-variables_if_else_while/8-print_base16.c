#include <stdio.h>
/**
 * main - Entry
 * Description: 0-9
 * Return: 0 (success)
 */
int main(void)
{
	char x[] = "0123456789abcdef";

	while (x != 17)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
