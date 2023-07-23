#include "sort.h"

/**
 * find_max - Find the maximum element in an array.
 * @array: The array of integers to find the maximum element from.
 * @size: The size of the array.
 * Return: The maximum element in the array.
 */
int find_max(int *array, size_t size)
{
	int max = array[0];
	size_t i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > max)
		max = array[i];
	}

	return (max);
}

/**
 * count_digits - Count the number of digits in a number.
 * @n: The number to count the digits from.
 * Return: The number of digits in n.
 */
int count_digits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n /= 10;
	}

	return (count);
}

/**
 * counting_sort - Perform counting sort on an array
 * based on a given digit place.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * @place: The digit place to sort by.
 */
void counting_sort(int *array, size_t size, int place)
{
	int *output, i;
	int count[10] = {0};

	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return;

	for (i = 0; i < size; i++)
		count[(array[i] / place) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = size - 1; i >= 0; i--)
	{
		output[count[(array[i] / place) % 10] - 1] = array[i];
		count[(array[i] / place) % 10]--;
	}

	for (i = 0; i < size; i++)
		array[i] = output[i];

	free(output);
}

/**
 * radix_sort - Sort an array of integers in
 * ascending order using the Radix sort algorithm.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 */
void radix_sort(int *array, size_t size)
{
	int max, int digits;
	int place, int i;

	max = find_max(array, size);

	digits = count_digits(max);

	place = 1;
	for (i = 0; i < digits; i++)
	{
		counting_sort(array, size, place);
		print_array(array, size);
		place *= 10;
	}
}
