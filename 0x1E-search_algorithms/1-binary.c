#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binarySearch - binarySearch
 * @arr: array
 * @l: start array
 * @r: end array
 * @x: value
 * Return: index or -1
 */
int binarySearch(int arr[], size_t l, size_t r, int x)
{
	size_t i, mid;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{

		printf("%d", arr[i]);
		if (i < r)
			printf(", ");
		if (i == r)
			printf("\n");
	}

	mid = l + (r - l) / 2;
	if (arr[mid] == x)
		return (mid);
	if (r > l)
	{
		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));
		if (arr[mid] < x)
			return (binarySearch(arr, mid + 1, r, x));
	}

	return (-1);
}

/**
 * binary_search - binary_search
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r = 0;
	size_t l = size - 1;

	if (array == NULL)
		return (-1);
	return (binarySearch(array, r, l, value));
}

