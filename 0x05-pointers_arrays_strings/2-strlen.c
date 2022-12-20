#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 *
 * @s: this is the input string
 *
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
