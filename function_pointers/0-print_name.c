#include "function_pointers.h"

/**
 * print_name - Print a name of function pointer
 * @name: Contain the name
 * @f: Pointer of the function that using "name"
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
