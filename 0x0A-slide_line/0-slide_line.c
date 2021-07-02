#include "slide_line.h"
/**
 * slide_left - moves left
 * @line: line array
 * @size: array size
 */
void slide_left(int *line, size_t size)
{
	size_t i, j, k;

	for (i = 0, j = 0; i < size; i++, j++)
	{
		if (line[i] == 0)
			while (line[i] == 0)
				i++;

		j = i + 1;

		if (line[j] == 0)
			while (line[j] == 0)
				j++;

		if (line[i] == line[j])
		{
			line[i] = line[i] * 2;
			line[j] = 0;
			i = j + 1;
		}
		else
			i++;

		j = 0;
	}

	for (i = 0, k = 0; i < size; i++)
		if (line[i] != 0)
			line[k++] = line[i];

	while (k < size)
		line[k++] = 0;
}


/**
 * slide_right - moves rigth
 * @line: line array
 * @size: array size
 */
void slide_right(int *line, size_t size)
{
	size_t i, j;

	for (i = size; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			if (line[i - 1] != 0)
			{
				if (line[i - 1] == line[j - 1])
				{
					line[i - 1] = line[i - 1] * 2;
					line[j - 1] = 0;
					break;
				}

				if (line[i - 1] != line[j - 1] &&
				    line[j - 1] != 0)
					break;
			}
			if (line[i - 1] == 0)
			{
				if (line[j - 1] != 0)
				{
					line[i - 1] = line[j - 1];
					line[j - 1] = 0;
					i++;
					break;
				}
			}
		}
	}
}

/**
 * slide_line - slides
 * @line: array line
 * @size: array size.
 * @direction: direction of motion
 * Return: 1 or 0.
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction != 0 && direction != 1)
		return (0);
	if (direction == 0)
		slide_left(line, size);
	if (direction == 1)
		slide_right(line, size);
	return (1);
}
