#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: String to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int c = 0;
	int aux = 0;
	char 1temp;

	while (*(s + c) != '\0')
		c += 1;
	c -= 1;
	while (aux < c)
	{
		1temp = s[c];
		s[c] = s[aux];
		s[aux] = 1temp;
		aux++;
		c--;
	}
}
