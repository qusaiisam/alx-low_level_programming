#include "main.h"
/**
* _isupper - cheks if character is uppercase
* @c: character to check if uppercase
* Description: this function prints '_putchar'
* Return: always return 0
**/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
