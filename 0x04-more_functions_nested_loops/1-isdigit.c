#include "main.h"

/**
 * _isdigit(int c) - checks if c is a digit
 * @c: the character to be checked
 *
 * Returns: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
