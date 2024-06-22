#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabets in reverse order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
