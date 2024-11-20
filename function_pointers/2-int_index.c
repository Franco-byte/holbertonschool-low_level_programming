#include "function_pointers.h"

/**
 * int_index - Call a function whit a pointer to check the numbers
 * @array: Contains the string  dor evalue
 * @size: Size of string
 * @cmp: Function pointer ti executing
 *
 * Return: The position of i in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
