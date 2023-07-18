#include <stdio.h>
/**
 * main - Entry
 * Description: Write a program that prints all possible combinations
 * of single-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int x = 0;

	for (i = 0; i < 90; i++)
	{
		if (i % 10 == 0)
		{
			i = i + x;
			x++;
		}
		else
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
