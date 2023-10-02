#include "main.h"
/**
* _abs - cheks sign of number and if greater or less than 0.
* @n: number to check
* Description: this function prints '_putchar'
* Return: return 1 for letters and 0 for else
**/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
