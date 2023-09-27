#include "sort.h"
/**
 *quick_sort - sorts an array considering the famous quick sort
 *@array: array to sort
 *@size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quicksort_rec(array, 0, size - 1, size);
}
/**
 *quicksort_rec - carries out the recusrsive steps of quick sort
 *@array: array to divide acoording to pivot
 *@low: lowest index of the array
 *@high: last index in the array
 *@size: size of an array
 */
void quicksort_rec(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high);
		print_array(array, size);
		quicksort_rec(array, low, pivot_index - 1, size);
		quicksort_rec(array, pivot_index + 1, high, size);
	}

}
/**
 *partition - finds the pivot
 *@array: array to look into
 *@low: first index
 *@high: highest index
 *Return: index of the pivot
 */
int partition(int *array, int low, int high)
{
	int pivot_value, i, j;

	pivot_value = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	return (i);
}
/**
 * swap - swap vaues of two numbers
 * @a: first number
 * @b: second number
 */
void swap(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
