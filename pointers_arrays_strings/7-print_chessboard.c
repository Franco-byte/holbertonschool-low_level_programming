#include "main.h"

/**
 * print_chessboard - Imprime el tablero de ajedez
 * @a: Array doble para hacer el tablero
 */

void print_chessboard(char (*a)[8])
{
	int filas, columnas;

	for (filas = 0; filas < 8; filas++)
	{
		for (columnas = 0; columnas < 8; columnas++)
		{
			_putchar(a[filas][columnas]);
		}
		_putchar('\n');
	}
}
