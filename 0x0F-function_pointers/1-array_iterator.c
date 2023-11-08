#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elen on a newl
 * @array: array
 * @size: how many elm to print
 * @action: pointers to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
