#include <stdio.h>

/**
 * main - Entry of the program
 *
 * Description: This program prints base 16 numbers and letters in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0'); /*convert the digit to its ANSII representation*/
		n++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
