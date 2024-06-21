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
	char upletter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (upletter <= 'Z')
	{
		putchar(upletter);
		upletter++;
	}
	putchar('\n');
	return (0);
}
