#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j <= i; j++)
		{
			for (k = 1; k <= size - i; k++)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
}
