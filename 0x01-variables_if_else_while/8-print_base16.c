#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	char let;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (let = 'a'; let < 'g'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
