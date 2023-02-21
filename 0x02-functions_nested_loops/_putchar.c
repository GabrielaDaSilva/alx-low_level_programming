#include "main.h"
#include <unistd.h>

/**
 * main - _putchar writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On eror, -1 is returned, errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
