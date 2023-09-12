#include "main.h"
/**
* _isalpha- cheks if character is  a letter and whuch case
* @c: character to check
* Description: this function prints '_putchar'
* Return: return 1 for letters and 0 for else
**/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
