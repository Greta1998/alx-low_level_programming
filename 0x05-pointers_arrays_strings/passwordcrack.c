#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12
/**
 * generate_password- generates a random password
 * @password: points to an array
 * where the password will be stored
 * @length: length of the password
 */
void generate_password(char *password, int length)
{
	int i;
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int size = sizeof(charset) - 1;

	for (i = 0; i < length; i++)
	{
		int key = rand() % size;
		password[i] = charset[key];
	}
	password[length] = '\0';
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0(success)
 */
int main (void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	generate_password(password, PASSWORD_LENGTH);

	printf("Generated password: %s\n", password);

	return (0);
}
	
