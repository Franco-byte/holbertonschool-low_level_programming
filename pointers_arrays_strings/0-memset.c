#include "main.h"

/**
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		n--;
		p++;
	}
	return (s);
}
