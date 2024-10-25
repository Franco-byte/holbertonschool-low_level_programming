#include "main.h"

/**
 * jack_bauer - las horas del dia*
 * Return: nada si es void
 */

void jack_bauer(void)
{
	int uh, dh, dm, um;

	for (dh = 0; dh <= 2; dh++)
	{
		for (uh = 0; uh <= 9; uh++)
		{
			if (dh == 2 && uh == 4)
			break;

			for (dm = 0; dm <= 5; dm++)
			{
				for (um = 0; um <= 9; um++)
				{
					_putchar(dh + '0');
					_putchar(uh + '0');
					_putchar(':');
					_putchar(dm + '0');
					_putchar(um + '0');
					_putchar('\n');
				}
			}
		}
	}
}
