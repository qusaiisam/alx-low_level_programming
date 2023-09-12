#include "main.h"
/**
* print_alphabet_x10 - print lowercase letters
* Description: this function prints '_putchar'
* Return: always return 0
**/
void print_alphabet_x10(void)
{
	char x, i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
