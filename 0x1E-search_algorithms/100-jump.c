#include "search_algos.h"
/**
 * jump_search - jump search function
 * @array: array to search on
 * @size: the size of array
 * @value: the value to be searched
 * Return: firdt Index value or -1 on fail
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i = 0;
	int check = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n"
			       , i - step, i);
			check = 1;
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	}
	if (check != 0)
	{
		i = i - step;
		while (i < size && i < i + step)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
			else
				i++;
		}
	}
	return (-1);
}
