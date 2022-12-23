#include "main.h"
/**
 * _strncpy - C function that copies a string, including the terminating null
 * byte, using at most an inputted number of bytes.
 * if the lenght of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes.
 * works identically to the standard library function 'strncy'.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
