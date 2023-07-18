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
		if (i < 9)
		{
			putchar (i + '0');
		}
		else
		{
			putchar ('0');
			putchar (i + '0');
		}
		if (i == 89)
			putchar (',');
	}
	putchar('\n');
	return (0);
}
