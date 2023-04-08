#include "hash_tables.h"

/**
 * hash_djb2 - Hash function, that implements a string and change it into a hash number
 * @str: the string to change
 *
 * Return: The hash number
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
