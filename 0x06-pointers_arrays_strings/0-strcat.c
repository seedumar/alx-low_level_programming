#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminat
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: Apointer to the string to be concatenated upon.
 * @src: The source string to be apppended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
