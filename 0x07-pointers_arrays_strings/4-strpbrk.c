#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept and returns
 * a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found.
 * @s: input
 * @accept: input
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (accept[k] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
