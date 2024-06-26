#include "main.h"
#include <stdio.h>

/**
 * print_to_98(int n)- prints all natural numbers from n to 98
 * @n: the starting number
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

}
