#include "main.h"

/**
 * *_memset - fills memor with a constant byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
