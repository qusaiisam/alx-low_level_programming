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

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + _atoi(argv[i]);
		}
		printf("%d", sum);
	}
	return (0);
}
