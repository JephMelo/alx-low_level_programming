#include "main.h"

/**
 * print_square - Prints and squares according and number of times
 * @size: The number of squares/number fof times
 * Return: empty
 */

void print_square(int size)

{
	int x, y;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}
