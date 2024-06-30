#include "main.h"

/**
 * add(int x, int y)- adds x and y and returns the results
 * @x: the first integer
 * @y: The second integer
 *
 * Return: addition result
 */
int add(int x, int y)
{
	int result;

	result= x + y;
	_putchar(result + '0');

	return (result);
}
