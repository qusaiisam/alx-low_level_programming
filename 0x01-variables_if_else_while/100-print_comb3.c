#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i, j;
	int x = 0, y = 1;

	for (i = x; i <= 9; i++)
	{
		for (j = y; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i + j == 17)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
		x++;
		y++;
	}
	return (0);
}
