#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * without using char and use putchar twice.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
