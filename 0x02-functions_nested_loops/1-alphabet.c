#include "main.h"
/**
 * main -  print alphbet in lowercase.
 *
 * Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
}
