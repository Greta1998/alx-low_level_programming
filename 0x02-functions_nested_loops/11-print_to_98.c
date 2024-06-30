#include "main.h"

/**
 * print_to_98(int n)- prints all natural numbers from n to 98
 * @n: the starting number
 *
 */
void print_to_98(int n)
{
	int i;

	i = n;

	if (n >= 98)
	{
		while (n > 98)

		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
			i--;
		}
		_putchar(i + '0');
		_putchar('\n');
	}
	else
	{
		while (n < 98)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
			i++;
		}
		_putchar(i + '0');
		_putchar('\n');
	}
}
