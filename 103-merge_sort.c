#include "sort.h"

/**
 * merge - Merge two sorted sub-arrays of an array.
 * @array: The array of integers to merge.
 * @left: The left sub-array of integers to merge.
 * @right: The right sub-array of integers to merge.
 * @size: The size of the array.
 */
void merge(int *array, int *left, int *right, size_t size)
{
	int i, j, k = 0;
	int left_size = size / 2, right_size = size - left_size;

	for (i = 0; i < left_size; i++)
		left[i] = array[i];
	for (j = 0; j < right_size; j++)
		right[j] = array[i + j];
	i = 0;
	j = 0;
	while (i < left_size && j < right_size)
	{
		if (left[i] <= right[j])
			array[k++] = left[i++];
		else
			array[k++] = right[j++];
	}
	while (i < left_size)
		array[k++] = left[i++];
	while (j < right_size)
		array[k++] = right[j++];
}

/**
 * merge_sort - Sort an array of integers in ascending
 * order using the top-down Merge sort algorithm.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 */
void merge_sort(int *array, size_t size)
{
	int i, *left, *right;

	if (size < 2)
		return;
	left = malloc(sizeof(int) * (size / 2));
	if (left == NULL)
		return;
	right = malloc(sizeof(int) * (size - size / 2));
	if (right == NULL)
	{
		free(left);
		return;
	}
	printf("Merging...\n");
	printf("[left]: ");
	for (i = 0; i < size / 2; i++)
		printf("%d ", array[i]);
	printf("\n");
	printf("[right]: ");
	for (i = size / 2; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");

	merge_sort(left, size / 2);
	merge_sort(right, size - size / 2);
	merge(array, left, right, size);
	printf("[Done]: ");
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
	free(left);
	free(right);
}
