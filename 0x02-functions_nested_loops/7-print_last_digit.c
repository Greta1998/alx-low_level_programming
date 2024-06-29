#include "main.h"

/**
 * print_last_digit(int n)- prints the last digit of n
 * @n: is the integer to be checked
 *
 * Return: Always last digit of n (success)
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
