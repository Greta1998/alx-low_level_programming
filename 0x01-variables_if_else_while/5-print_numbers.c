#include <stdio.h>

/**
 * main-Entry point of the program
 *
 * Description: this program will print all single numbers in base 10.
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
