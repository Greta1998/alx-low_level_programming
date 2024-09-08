#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer we need to set
 * @dest: string to set
 */
void set_string(char **s, char *dest)
{
	*s = dest;
}
