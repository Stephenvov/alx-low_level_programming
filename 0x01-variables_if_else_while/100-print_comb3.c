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

	for (i = 0; i < 90; i++)
	{
		putchar('0' + (i/10));
		putchar ('0' + (i%10));
		if (i != 89)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
