#include "main.h"

/**
 * _strlen - finds lenght of string.
 * @s: string
 * Return: integer(int)
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - finds the length of string but fo constant chars
 * @s: string
 * Return: integer(int)
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
