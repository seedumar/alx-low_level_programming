#include "main.h"
#include <unistd.h>
/**
 * _puchar - writes the character c to stdout
 * &c: The character to print
 *
 * Return: On success 1
 * Otherwise erro on -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
