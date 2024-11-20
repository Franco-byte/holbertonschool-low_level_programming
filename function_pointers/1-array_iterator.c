#include "function_pointers.h"

/**
 * array_iterator - Iterated over an array and executes the
 * the function ponted to by array
 * @array: Contains the data to iterate
 * @size: Size of array
 * @action: funtion pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
