#include <stdio.h>
#include "main.h"

/**
* main - adds positive numbers.
* _atoi - converts a string to an integer
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/

int _atoi(char *argv[])
{
	int i, sum = 0;

	if (argv[] > 1)
	{
		for (i = 1; i < argv[]; i++)
		{
			sum = sum + argv[i];
		}
		printf("%d", sum);
	}
	return (0);
}
