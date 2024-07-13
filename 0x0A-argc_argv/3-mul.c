#include <stdio.h>
#include <main.h>

/**
 * main - multiplies two numbers and returns the product
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: the product of the two numbers and
 * 1 if the program does not receive two arguments
 */
int main(int argc, int *argv[])
{
	int i, prod;

	if (argc == 2)
	{
		prod = argv[0] * argv[1];
		printf("%d\n", prod);
		return (prod);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
