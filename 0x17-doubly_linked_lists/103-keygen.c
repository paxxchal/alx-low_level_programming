#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY_LENGTH 10

/**
 * generate_key - Generates a random key based on the provided username.
 * @username: The username for which the key is generated.
 * Return: A dynamically allocated string representing the generated key,
 *         or NULL if memory allocation fails.
 */
char *generate_key(char *username)
{
	int i;

	char *key = malloc(KEY_LENGTH + 1);

	if (key == NULL)
	{
		return (NULL);
	}

	strcpy(key, username);
	strcat(key, "-");

	for (i = 0; i < 7; i++)
	{
		key[strlen(key)] = (char)('a' + rand() % 26);
	}

	key[strlen(key)] = '\0';

	return (key);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: The `main` function takes a single command-line argument, which
 * should be a username. It then calls the `generate_key` function to generate
 * a random key based on the provided username. If the key generation is
 * successful, it prints the key to the standard output. If memory allocation
 * fails or the command-line argument count is incorrect, appropriate error
 * messages are printed to the standard error. The program returns EXIT_SUCCESS
 * upon successful execution or EXIT_FAILURE in case of errors.
 *
 * Return: EXIT_SUCCESS if the program executes successfully, EXIT_FAILURE if
 * there are errors.
 */

int main(int argc, char **argv)
{
	char *key;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (EXIT_FAILURE);
	}

	key = generate_key(argv[1]);
	if (key == NULL)
	{
		fprintf(stderr, "Error: Could not generate key\n");
		return (EXIT_FAILURE);
	}

	printf("%s\n", key);

	free(key);

	return (EXIT_SUCCESS);
}
