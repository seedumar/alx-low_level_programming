#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - program tat generates random valid
 * password for the program 101-crackme
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, sum, n;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		_putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			_putchar(n + '0');
			break;
		}
	}
	return (0);
}
