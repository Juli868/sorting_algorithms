#include "sort.h"
/**
 * selection_sort - sorts the elements of the array in an increasing order
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, counter, hold;

	if (size <= 0)
		return;
	for (i = 0; i < size; i++)
	{
		temp = array[i];
		counter = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < temp)
			{
				temp = array[j];
				counter = j;
			}
			else
				continue;
		}
		hold = array[i];
		array[i] = temp;
		array[counter] = hold;
		print_array(array, size);
	}
}
