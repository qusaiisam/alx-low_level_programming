#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *k = needle;

		while (*j == *k && *k != '\0')
		{
			j++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
