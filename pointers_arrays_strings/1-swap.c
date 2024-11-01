#include "main.h"

/**
 *swap_int - Alterate variabls
 * @a: Pointer of a vlue a
 * @b: Pointer of a value b
 *
 * Return nada
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
