#include "main.h"
/**
* print_alphabet - print lowercase letters
* Description: this function prints '_putchar'
* Return: always return 0
**/
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');

