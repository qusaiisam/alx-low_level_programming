#include <stdio.h>
#include "main.h"

/**
* main - multiplies two numbers.
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/

int _atoi(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum = sum + _atoi(argv[i]);
		}
		printf("%d", sum);
	}
	return (0);
}
