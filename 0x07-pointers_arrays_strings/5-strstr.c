#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0)
 * are not compared and returns a pointer to the beginning
 * of the located substring, or NULL if the substring is not found.
 * @haystack: input
 * @needle: input
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
