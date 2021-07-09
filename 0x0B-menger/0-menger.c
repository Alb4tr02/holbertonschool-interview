#include <math.h>
#include "menger.h"

/**
 * get_character - next get_character
 *
 * @row: row
 * @col: col
 *
 * Return: 1 to # or 0 to blank
 */

int get_character(int row, int col)
{
	while (row != 0 && col != 0)
	{
		if (row % 3 == 1 && col % 3 == 1)
			return (0);
		row /= 3;
		col /= 3;
	}
	return (1);
}

/**
 * menger - Draws an Sponge
 *
 * @level: level
 */

void menger(int level)
{
	int row, col, size;

	if (level < 0)
		return;

	for (row = 0, size = pow(3, level); row < size; row++)
	{
		for (col = 0; col < size; col++)
			if (get_character(row, col) == 1)
				printf("#");
			else
				printf(" ");
		printf("\n");
	}
}
