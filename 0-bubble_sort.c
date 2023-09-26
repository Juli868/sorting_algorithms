#include "sort.h"
/**
 *bubble_sort- sorts an array in descending order
 *@array: array to sort
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int counter = 0, hold;

	if (array != NULL)
	{
		for (i = 0; i < (size - 1); i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					hold = array[j];
					array[j] = array[j + 1];
					array[j + 1] = hold;
					counter++;
					print_array(array, size);
				}
			}
			if (counter == 0)
				break;
		}
	}
}
