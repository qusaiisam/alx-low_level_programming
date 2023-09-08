#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabets in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
