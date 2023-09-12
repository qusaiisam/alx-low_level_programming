#include "main.h"
/**
* print_sign - cheks sign of number and if greater or less than 0.
* @n: number to check
* Description: this programm prints '_putchar'
* Return: return 1 for letters and 0 for else
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
