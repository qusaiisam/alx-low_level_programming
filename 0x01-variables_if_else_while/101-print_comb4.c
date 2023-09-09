#include <stdlib.h>
#include <stdio.h>
/**
* main - prints all possible different combinations of three digits.
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i, j, k;
	int x = 0, y = 1, z = 2;

	for (i = x; i <= 9; i++)
	{
		for (j = y; j <= 9; j++)
		{
			for (k = z; k <= 9; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i + j + k == 24)
				{
					putchar('\n');
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
		x++;
		y++;

	k++;
	}
	return (0);
}
