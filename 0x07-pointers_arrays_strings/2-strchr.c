#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 * @c: input
 * @s: input
 * Return: Always ).
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
