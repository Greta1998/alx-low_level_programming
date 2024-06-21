#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program print uppercase and lowercase alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	char upletter = 'A';

	while (upletter <= 'Z')
	{
		putchar(upletter);
		upletter++;
	}
	putchar('\n');
	return (0);
}
