#include "sort.h"

/**
 * swap - Swap two elements in an array.
 * @array: The array of integers to swap.
 * @i: The index of the first element to swap.
 * @j: The index of the second element to swap.
 */
void swap(int *array, int i, int j)
{
	int temp = array[i];

	array[i] = array[j];
	array[j] = temp;
}

/**
 * print_array - Print an array of integers.
 * @array: The array of integers to print.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * sift_down - Sift down a node in a heap.
 * @array: The array of integers to sift down.
 * @start: The index of the node to sift down.
 * @end: The index of the last node in the heap.
 * @size: The size of the array.
 */
void sift_down(int *array, int start, int end, size_t size)
{
	int root = start, left, right, largest;

	while (root * 2 + 1 <= end)
	{
		left = root * 2 + 1;
		right = root * 2 + 2;
		largest = root;

		if (array[left] > array[largest])
			largest = left;

		if (right <= end && array[right] > array[largest])
			largest = right;
		if (largest != root)
		{
			swap(array, root, largest);
			print_array(array, size);
			root = largest;
		}
		else
			return;
	}
}

/**
 * heapify - Build a max heap from an array.
 * @array: The array of integers to heapify.
 * @size: The size of the array.
 */
void heapify(int *array, size_t size)
{
	int start;

	start = (size - 2) / 2;

	while (start >= 0)
	{
		sift_down(array, start, size - 1, size);
		start--;
	}
}

/**
 * heap_sort - Sort an array of integers in ascending
 * order using the sift-down Heap sort algorithm.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int end;

	if (size < 2)
		return;

	heapify(array, size);

	end = size - 1;
	while (end > 0)
	{
		swap(array, 0, end);
		print_array(array, size);
		end--;
		sift_down(array, 0, end, size);
	}
}
