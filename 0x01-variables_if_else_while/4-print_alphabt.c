#include <stdio.h>

/**
 * main- Entry point of the program
 *
 * Author: Greta
 *
 * Description: This program prints lowercase alphabtes expect q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
