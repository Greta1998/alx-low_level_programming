#include <stdio.h>

/**
 * main - Entry of the program
 *
 * Description: This print put single numbers in base 10 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0'); /*convert the digit to its ASCII representation*/
		n++;
	}
	putchar('\n');
	return (0);
}
