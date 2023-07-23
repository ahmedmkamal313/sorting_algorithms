#include "sort.h"

/**
 * counting_sort - Sort an array of integers in ascending
 * order using the Counting sort algorithm.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 */
void counting_sort(int *array, size_t size)
{
	int i, j, k, max;
	int *count, *temp;

	max = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
		max = array[i];
	}
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
		return;
	for (i = 0; i <= max; i++)
		count[i] = 0;
	for (i = 0; i < size; i++)
		count[array[i]]++;
	printf("Counting array: ");
	for (i = 0; i <= max; i++)
		printf("%d ", count[i]);
	printf("\n");
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];
	temp = malloc(sizeof(int) * size);
	if (temp == NULL)
	{
		free(count);
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		temp[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	for (i = 0; i < size; i++)
		array[i] = temp[i];
	free(count);
	free(temp);
}
