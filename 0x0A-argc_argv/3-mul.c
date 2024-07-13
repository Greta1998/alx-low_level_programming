#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers and returns the product
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: the product of the two numbers and
 * 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (argc == 3)
	{
		prod = num1 * num2;
		printf("%d\n", prod);
		return (prod);
	}
	else
	{
		printf("Error");
		return (1);
	}
}