#include "main.h"
/**
 * main -  print alphbet in lowercase.
 *
 * Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	char let;
	int i;

	for (i = 0; i < 10; i++)
	{		
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
	_putchar('\n');
	}
}
