#include "main.h"

/**
 * int _abs(int n) - prints the absolute value of an int
 * @n: the int to be checked
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
