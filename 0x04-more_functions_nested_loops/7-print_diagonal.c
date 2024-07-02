#include "main.h"

/**
 *print_diagonal - print a diagonal line
 *@n: integer that determines the length of the line
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}

