#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char let, e, q;

	e = 'e';
	q = 'q';

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != e && let != q)
			putchar(let);
	}
	putchar('\n');
	return (0);
}
