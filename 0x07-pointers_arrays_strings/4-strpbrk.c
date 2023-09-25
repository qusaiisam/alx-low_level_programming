#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int i = 0;
		int j;

		while (s[i] != '\0')
		{
			j = 0;
			while (accept[j] != '\0')
			{
			if (s[i] == accept[j])
			return (s);
			j++;
			}
		i++;
		}

	return ('\0');
}
