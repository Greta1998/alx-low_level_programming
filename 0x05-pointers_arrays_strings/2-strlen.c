#include "main.h"

/**
 * _strlen - the function returns the length of a string
 *
 * @s: pointer to the string s
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
