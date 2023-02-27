#include "main.h"
/**
 * print_rev -  prints a string in reverse,
 * followed by a new line.
 * @s: string to print
 * Return: 0.
 */
void print_rev(char *s)
{
	int stringi;
	int d;

	while (*s != '\0')
	{
		stringi++;
		s++;
	}
	s--;
	for (d = stringi; d > 0; d--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
