#include "main.h"
/**
* _islower - cheks if character is lowercase
* @c: character to check if lowercase
* Description: this function prints '_putchar'
* Return: always return 0
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
