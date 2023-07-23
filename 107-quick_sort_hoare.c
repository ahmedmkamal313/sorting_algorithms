#include "sort.h"

/**
 * swap - swaps two elements in an array
 * @a: pointer to the first element
 * @b: pointer to the second element
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * hoare_partition - partitions an array using Hoare's scheme
 * @array: pointer to the array
 * @low: starting index of the subarray
 * @high: ending index of the subarray
 * @size: size of the array
 * Return: index of the partition point
 */
int hoare_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[low];
	int i = low - 1;
	int j = high + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i >= j)
			return (j);
		swap(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * quick_sort_hoare_rec - recursively sorts a subarray using Quick sort
 * @array: pointer to the array
 * @low: starting index of the subarray
 * @high: ending index of the subarray
 * @size: size of the array
 */
void quick_sort_hoare_rec(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = hoare_partition(array, low, high, size);
		quick_sort_hoare_rec(array, low, p, size);
		quick_sort_hoare_rec(array, p + 1, high, size);
	}
}

/**
 * quick_sort_hoare - sorts an array of integers in ascending order using
 *                    Quick sort with Hoare's partition scheme
 *
 * @array: pointer to the array
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_hoare_rec(array, 0, size - 1, size);
}
