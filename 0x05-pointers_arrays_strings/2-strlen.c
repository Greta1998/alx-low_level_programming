#include "main.h"

/**
 * _strlen(char *s)- returns the length of a string
 *
 * *s- pointer to the string
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
