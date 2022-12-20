nclude "main.h"

/**
 * _puts - Write te character c to stdout
 * @str: The character to print
 *
 * Return: On success 1,
 * On error, -1 is returned
 */

void _puts(char *str)
{
	return (write(1, &str, 1));
}
