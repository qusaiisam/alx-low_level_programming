#include <stdio.h>
#include "main.h"

/**
* main - multiplies two numbers.
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
		
{
	int sum, num1, num2;

	if (argc < 3 || argc > 3)	
	{
		printf("Error\n");
		return (1);	
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	sum = num1 * num2;
	printf("%d\n", sum);
	return (0);		
}
