#include "main.h"

/**
 * print_trianle - prints a triangle
 * @size: numbers of lines
 * Return: no return
 */

void print_triangle(int size)
{
	int start = 0, end = size, count;

	if (size <= 0)
		_puchar('\n');
	else
	{
		for (count = 0; count < end; count++)
		{
			while (start < end)
			{
				if ((start + count + 1) >= end)
					_putchar('#');
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			_putchar('\n');
		}
	}
}
