#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point of the program
 *
 * Author: Greta
 *
 * Description: print last digit of random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %d is %d and is ", n, last);

	if (last > 5)
		printf("greater than 5\n");
	else if (last == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
