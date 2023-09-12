#include "main.h"
/**
* print_last_digit- cheks sign of number and if greater or less than 0.
* @n: number to check
* Description: this function prints '_putchar'
* Return: return 1 for letters and 0 for else
**/
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar('0' + x);
	return (x);
}
