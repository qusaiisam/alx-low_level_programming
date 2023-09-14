#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (success)
*/
int main(void)
{

	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
