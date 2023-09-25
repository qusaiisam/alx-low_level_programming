#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			i = 0;
			while (accept[i])
			{
			if (*s == accept[i])
			return (s);
			i++;
			}
		s++;
		}

	return ('\0');
}
